//#include <stdio.h>
//#include "linkedlist.h"
//#include <stdlib.h> // �����Ϸ� ������ ���� malloc�� �����;� �� ���� �ƴ� ���� �ִ�. ���� ������ �� �ȴٸ�
//// �� ��������� �����;� �Ѵ�. --> ���� �ᱹ �̰� ��������. 
//
//int main(void) {
//	linkedList_h* L;
//	listNode* p;
//	L = createLinedkList_h();
//
//	printf("(1) ����Ʈ�� [��],[��],[��] ��� �����ϱ�!\n");
//	insertLastNode(L, "��"); insertLastNode(L, "��"); insertLastNode(L, "��");
//	printList(L);
//
//	printf("(2) ����Ʈ�� [��] ��� Ž���ϱ�!\n");
//	p = searchNode(L, "��");
//	if (p == NULL) printf("ã�� �����Ͱ� �����ϴ�. \n");
//	else printf("[%s]�� ã�ҽ��ϴ�. \n", p->data);
//
//	printf("(3) ����Ʈ [��]�ڿ� [��] ��� �����ϱ�!\n");
//	insertMiddleNode(L, p,"��");
//	printList(L);
//
//	printf("(4) ����Ʈ���� [��] ��� �����ϱ�!\n");
//	p = searchNode(L, "��");
//	deleteNode(L, p);
//	printList(L);
//
//	printf("(5) ����Ʈ ������ �������� �ٲٱ� !\n");
//	reverse(L);
//	printList(L);
//
//	freeLinkedList_h(L);
//	getchar();
//
//	return 0;
//}