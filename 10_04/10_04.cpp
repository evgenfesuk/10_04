// 10_04.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "linkList.h"

using namespace std;

int main()
{
		linkList* l = new linkList;
		l->additem(1);
		l->additem(2);
		l->additem(3);
		l->display();
		l->~linkList();
		linkList* l2 = new linkList;
		l2->additem(3);
		l2->additem(4);
		l2->addItemInvert(2);
		l2->additem(5);
		l2->addItemInvert(1);
		l2->display();
		l2->~linkList();
	system("pause");
    return 0;
}

