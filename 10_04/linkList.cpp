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
	link* newlink = new link; // �������� ������
	newlink->data = d; // ���������� ������
	newlink->next = first; // ���������� �������� first
	first = newlink; // first ������ ��������� �� ����� �������
}

void linkList::display()
{
	link* current = first; // �������� � ������� ��������
	while (current) // ���� ���� ������
	{
		cout << current->data << endl; // �������� ������
		current = current->next; // ��������� � ���������� ��������
	}
}


linkList::~linkList()
{

}
