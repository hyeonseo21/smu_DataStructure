//#include "DoubleLinkedList.h"
//
//#include <stdio.h>
//#include "linkedlist.h"
//#include <stdlib.h> // �����Ϸ� ������ ���� malloc�� �����;� �� ���� �ƴ� ���� �ִ�. ���� ������ �� �ȴٸ�
//// �� ��������� �����;� �Ѵ�. --> ���� �ᱹ �̰� ��������. 
//
//int main(void) {
//	linkedList_h* DL;
//	listNode* p;
//	DL = createLinedkList_h();
//
//	printf("(1)���� ���� ����Ʈ �����ϱ�!\n");
//	printList(DL);
//
//	printf("(2) ���� ���� ����Ʈ�� [��] ��� �����ϱ�!\n");
//	insertNode(DL,NULL, "��");
//	printList(DL);
//
//	printf("(3) ���� ���� ����Ʈ [��]�ڿ� [��] ��� �����ϱ�!\n");
//	p = searchNode(DL, "��"); insertNode(DL, p, "��");
//	printList(DL);
//
//	printf("(4) ���� ���� ����Ʈ���� [��] ��� �ڿ� [��]��� �����ϱ�!\n");
//	p = searchNode(DL, "��"); insertNode(DL, p, "��");
//	printList(DL);
//
//	printf("(5) ���� ���� ����Ʈ���� [��]��� �����ϱ� !\n");
//	p = searchNode(DL, "��"); deleteNode(DL, p);
//	printList(DL);
//
//	getchar();
//
//	return 0;
//}
//
