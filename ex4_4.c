//#include "DoubleLinkedList.h"
//
//#include <stdio.h>
//#include "linkedlist.h"
//#include <stdlib.h> // 컴파일러 레벨에 따라 malloc을 가져와야 할 수도 아닐 수도 있다. 만약 실행이 안 된다면
//// 이 헤더파일을 가여와야 한다. --> 나도 결국 이게 문제였다. 
//
//int main(void) {
//	linkedList_h* DL;
//	listNode* p;
//	DL = createLinedkList_h();
//
//	printf("(1)이중 연결 리스트 생성하기!\n");
//	printList(DL);
//
//	printf("(2) 이중 연결 리스트에 [월] 노드 삽입하기!\n");
//	insertNode(DL,NULL, "월");
//	printList(DL);
//
//	printf("(3) 이중 연결 리스트 [월]뒤에 [수] 노드 삽입하기!\n");
//	p = searchNode(DL, "월"); insertNode(DL, p, "수");
//	printList(DL);
//
//	printf("(4) 이중 연결 리스트에서 [수] 노드 뒤에 [금]노드 삽입하기!\n");
//	p = searchNode(DL, "수"); insertNode(DL, p, "금");
//	printList(DL);
//
//	printf("(5) 이중 연결 리스트에서 [수]노드 삭제하기 !\n");
//	p = searchNode(DL, "수"); deleteNode(DL, p);
//	printList(DL);
//
//	getchar();
//
//	return 0;
//}
//
