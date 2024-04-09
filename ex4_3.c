#include "CircularLinkedList.h"

#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h> // 컴파일러 레벨에 따라 malloc을 가져와야 할 수도 아닐 수도 있다. 만약 실행이 안 된다면
// 이 헤더파일을 가여와야 한다. --> 나도 결국 이게 문제였다. 

int main(void) {
	linkedList_h* CL;
	listNode* p;
	CL = createLinedkList_h();

	printf("(1)원형 리스트 생성하기!\n");
	printList(CL);

	printf("(2) 원형 리스트에 [월] 노드 삽입하기!\n");
	insertFirstNode(CL, "월");
	printList(CL);

	printf("(3) 원형 리스트 [월]뒤에 [수] 노드 삽입하기!\n");
	p=searchNode(CL,"월"); insertMiddleNode(CL, p, "수");
	printList(CL);

	printf("(4) 원형 리스트에서 [수] 노드 뒤에 [금]노드 삽입하기!\n");
	p = searchNode(CL,"수"); insertMiddleNode(CL, p, "금");
	printList(CL);

	printf("(5) 원형 리스트에서 [수]노드 삭제하기 !\n");
	p = searchNode(CL, "수"); deleteNode(CL, p);
	printList(CL); 

	getchar();

	return 0;
}

