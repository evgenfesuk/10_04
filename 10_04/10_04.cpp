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
	system("pause");
    return 0;
}

