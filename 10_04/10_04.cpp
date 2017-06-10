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
		l->additem(3);
		l->additem(4);
		l->display();
	system("pause");
    return 0;
}

