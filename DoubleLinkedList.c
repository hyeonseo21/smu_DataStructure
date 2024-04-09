//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "DoubleLinkedList.h"
//#include <stdlib.h> // 컴파일러 레벨에 따라 malloc을 가져와야 할 수도 아닐 수도 있다. 만약 실행이 안 된다면
//// 이 헤더파일을 가여와야 한다. --> 나도 결국 이게 문제였다. 
//#include <string.h>
//
//linkedList_h* createLinedkList_h(void) {
//	linkedList_h* DL;
//	DL = (linkedList_h*)malloc(sizeof(linkedList_h));
//	DL->head = NULL;
//	return DL;
//}
//
//
//void printList(linkedList_h* DL) {
//	listNode* p;
//	printf("DL={");
//	p = DL->head;
//	while (p != NULL) {
//		printf("%s", p->data);
//		p = p->rlink;
//		if (p != NULL) printf(", ");
//	}
//	printf(")\n");
//
//}
//
//void insertNode(linkedList_h* DL,listNode * pre, char* x) {
//	listNode* newNode;
//	newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	if (DL->head == NULL) {
//		newNode->rlink = NULL;
//		newNode->llink = NULL;
//		DL->head = newNode;
//	}
//
//	else {
//		newNode->rlink = pre-> rlink;
//		pre-> rlink = newNode;
//		newNode->llink = pre;
//		if (newNode->rlink != NULL)
//			newNode->rlink->llink = newNode;
//	}
//
//}
//
//
//
//void deleteNode(linkedList_h* DL, listNode* old) {
//	if (DL->head == NULL) return;
//	else if (old == NULL) return;
//	else { 
//		old -> llink->rlink = old->rlink;
//		old->rlink->llink = old->llink;
//		free(old);
//	}
//	
//}
//
//listNode* searchNode(linkedList_h* DL, char* x) {
//	listNode* temp;
//	temp = DL->head;
//	while (temp != NULL) {
//		if (strcmp(temp->data, x) == 0) return temp;
//		else temp = temp->rlink;
//	}
//	return temp;
//}
