#include "CircularLinkedList.h"

#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h> // �����Ϸ� ������ ���� malloc�� �����;� �� ���� �ƴ� ���� �ִ�. ���� ������ �� �ȴٸ�
// �� ��������� �����;� �Ѵ�. --> ���� �ᱹ �̰� ��������. 

int main(void) {
	linkedList_h* CL;
	listNode* p;
	CL = createLinedkList_h();

	printf("(1)���� ����Ʈ �����ϱ�!\n");
	printList(CL);

	printf("(2) ���� ����Ʈ�� [��] ��� �����ϱ�!\n");
	insertFirstNode(CL, "��");
	printList(CL);

	printf("(3) ���� ����Ʈ [��]�ڿ� [��] ��� �����ϱ�!\n");
	p=searchNode(CL,"��"); insertMiddleNode(CL, p, "��");
	printList(CL);

	printf("(4) ���� ����Ʈ���� [��] ��� �ڿ� [��]��� �����ϱ�!\n");
	p = searchNode(CL,"��"); insertMiddleNode(CL, p, "��");
	printList(CL);

	printf("(5) ���� ����Ʈ���� [��]��� �����ϱ� !\n");
	p = searchNode(CL, "��"); deleteNode(CL, p);
	printList(CL); 

	getchar();

	return 0;
}

