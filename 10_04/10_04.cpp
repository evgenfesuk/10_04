// 10_04.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "linkList.h"

using namespace std;

int main()
{
		linkList li; // ������� ����������-������
		li.additem(25); // ��������� ���� ��������� �����
		li.additem(36);
		li.additem(49);
		li.additem(64);
		li.display(); // ���������� ������
		linkList* l = new linkList;
		l->additem(1);
		l->additem(2);
		l->display();
		l->~linkList();
		l->display();
	system("pause");
    return 0;
}

