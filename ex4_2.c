//#include <stdio.h>
//#include "linkedlist.h"
//#include <stdlib.h> // 컴파일러 레벨에 따라 malloc을 가져와야 할 수도 아닐 수도 있다. 만약 실행이 안 된다면
//// 이 헤더파일을 가여와야 한다. --> 나도 결국 이게 문제였다. 
//
//int main(void) {
//	linkedList_h* L;
//	listNode* p;
//	L = createLinedkList_h();
//
//	printf("(1) 리스트에 [월],[수],[일] 노드 생성하기!\n");
//	insertLastNode(L, "월"); insertLastNode(L, "수"); insertLastNode(L, "일");
//	printList(L);
//
//	printf("(2) 리스트에 [수] 노드 탐색하기!\n");
//	p = searchNode(L, "수");
//	if (p == NULL) printf("찾는 데이터가 없습니다. \n");
//	else printf("[%s]를 찾았습니다. \n", p->data);
//
//	printf("(3) 리스트 [수]뒤에 [금] 노드 삽입하기!\n");
//	insertMiddleNode(L, p,"금");
//	printList(L);
//
//	printf("(4) 리스트에서 [일] 노드 삭제하기!\n");
//	p = searchNode(L, "일");
//	deleteNode(L, p);
//	printList(L);
//
//	printf("(5) 리스트 순서를 역순으로 바꾸기 !\n");
//	reverse(L);
//	printList(L);
//
//	freeLinkedList_h(L);
//	getchar();
//
//	return 0;
//}