#include "stdafx.h"
#include "linkList.h"
#include <iostream>

using namespace std;

linkList::linkList()
{
	first = NULL;
}

void linkList::additem(int d)
{
	link* newlink = new link; // выдел€ем пам€ть
	newlink->data = d; // запоминаем данные
	newlink->next = first; // запоминаем значение first
	first = newlink; // first теперь указывает на новый элемент
}

void linkList::display()
{
	link* current = first; // начинаем с первого элемента
	while (current) // пока есть данные
	{
		cout << current->data << endl; // печатаем данные
		current = current->next; // двигаемс€ к следующему элементу
	}
}


linkList::~linkList()
{

}
