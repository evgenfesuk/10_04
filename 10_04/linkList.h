#pragma once
class linkList
{
public:
	linkList();
	void additem(int d); // ���������� ��������
	void addItemInvert(int d); // ���������� �������� � ����� ������
	void display(); // ����� ������
	struct link // ���� ������� ������
	{
		int data; // ��������� ������
		link* next; // ��������� �� ��������� ���������
	};
	~linkList();
private:
	link* first;
	int total;
	link* current;
};

