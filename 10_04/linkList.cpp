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
	link* newlink = new link; // �������� ������
	newlink->data = d; // ���������� ������
	newlink->next = first; // ���������� �������� first
	first = newlink; // first ������ ��������� �� ����� �������
	total++;
}

void linkList::addItemInvert(int d)
{
	link* tmp = new link; // �������� ������

	tmp = first; // ���������� ��������� �� ������ �������
	while (tmp->next != NULL) // ����� �� ���������� �������������� ��������
	{
			link* temp = tmp; // ��������� ��������� �� ������ ������� (��������� ��� ������ �����������)
			tmp = tmp->next; // �������� ������ ��  ��������� ������
	}
	link* current = new link; // �������� ������
	current->data = d; // ���������� ������
	current->next = NULL; // ����������� �������� ����
	tmp->next = current; // ���������� �������� first, ������ ������� ���������� �������� ��������� �� ����� ��������� �������
	total++;
}

void linkList::display()
{
	current = first; // �������� � ������� ��������
	while (current) // ���� ���� ������
	{
		cout << current->data << endl; // �������� ������
		current = current->next; // ��������� � ���������� ��������
	}
}


linkList::~linkList()
{
	/*current = first; // �������� � ������� ��������
	while (current) // ���� ���� ������
	{
		
		delete current;
		current = current->next; // ��������� � ���������� ��������

		*/
		/*link* prev = first->next;
		while (prev)
		{
			cout << "deleting adress " << first << " with data " << first->data << endl;
			delete first;
			first = prev;
			prev = first->next;
		}
		cout << "deleting adress " << first << " with data " << first->data << endl;
		delete first;*/

		link* current = first; // ���������� ��������� ��
							  // ������ �������
		while (current != NULL) // ����� �� ����������
								// ���������� ��������
		{
			link* temp = current; // ��������� ��������� �� // ������ �������
			current = current->next; // �������� ������ ��
									 // ��������� ������
			delete temp; // ������� ��� ������
		}
	//}
}
