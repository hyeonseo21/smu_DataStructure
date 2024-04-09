#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "CircularLinkedList.h"
#include <stdlib.h> // 컴파일러 레벨에 따라 malloc을 가져와야 할 수도 아닐 수도 있다. 만약 실행이 안 된다면
// 이 헤더파일을 가여와야 한다. --> 나도 결국 이게 문제였다. 
#include <string.h>

linkedList_h* createLinedkList_h(void) {
	linkedList_h* CL;
	CL = (linkedList_h*)malloc(sizeof(linkedList_h));
	CL->head = NULL;
	return CL;
}


void printList(linkedList_h* CL) {
	listNode* p;
	printf("CL={");
	p = CL->head;
	if (p == NULL) {
		printf(")\n"); return;
	}
	do {
		printf("%s", p->data);
		p = p->link;
		if (p != CL->head) printf(", ");

	} while (p != CL->head);
	printf(")\n");
	
}

void insertFirstNode(linkedList_h* CL, char* x) {
	listNode* newNode, *temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (CL->head == NULL) {
		CL->head = newNode;
		newNode->link = newNode;
	}

	else {
		temp = CL->head;
		while (temp->link != CL->head)
			temp = temp->link;
		newNode->link = temp->link;
		temp->link = newNode;
		CL->head = newNode;
	}
	
}


void insertMiddleNode(linkedList_h* CL, listNode*pre,char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (CL->head == NULL) {
		
		CL->head = newNode;
		newNode->link = newNode;
	}
	
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}

}


void deleteNode(linkedList_h* CL, listNode* old) {
	listNode* pre;
	if (CL->head == NULL) return;
	if (CL->head->link == CL->head) {
		free(CL->head);
		CL->head = NULL;
		return;
	}

	else if (old == NULL) return;
	else {
		pre = CL->head;
		while (pre->link != old) {
			pre = pre->link;
		}
		pre->link = old->link;
		if (old == CL->head)
			CL->head = old->link;
		free(old);
	}
}

listNode* searchNode(linkedList_h* CL, char* x) {
	listNode* temp;
	temp = CL->head;
	if (temp == NULL) return NULL;
	do {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->link;
	} while (temp != CL->head);
	return NULL;
}
