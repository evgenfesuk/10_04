#include "stdafx.h"
#include "linkList.h"
#include <iostream>

using namespace std;

linkList::linkList()
{
	first = NULL;
	total = 0;
}

void linkList::additem(int d)
{
	link* newlink = new link; // выделяем память
	newlink->data = d; // запоминаем данные
	newlink->next = first; // запоминаем значение first
	first = newlink; // first теперь указывает на новый элемент
	total++;
}

void linkList::display()
{
	current = first; // начинаем с первого элемента
	while (current) // пока есть данные
	{
		cout << current->data << endl; // печатаем данные
		current = current->next; // двигаемся к следующему элементу
	}
}


linkList::~linkList()
{
	/*current = first; // начинаем с первого элемента
	while (current) // пока есть данные
	{
		
		delete current;
		current = current->next; // двигаемся к следующему элементу

		*/
		link* prev = first->next;
		while (prev)
		{
			cout << "deleting adress " << first << " with data " << first->data << endl;
			delete first;
			first = prev;
			prev = first->next;
		}
		cout << "deleting adress " << first << " with data " << first->data << endl;
		delete first;
	//}
}
