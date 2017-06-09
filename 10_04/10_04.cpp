// 10_04.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "linkList.h"

using namespace std;

int main()
{
		linkList li; // создаем переменную-список
		li.additem(25); // добавляем туда несколько чисел
		li.additem(36);
		li.additem(49);
		li.additem(64);
		li.display(); // показываем список
	system("pause");
    return 0;
}

