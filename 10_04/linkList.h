#pragma once
class linkList
{
public:
	linkList();
	void additem(int d); // ���������� ��������
	void display(); // ����� ������
	struct link // ���� ������� ������
	{
		int data; // ��������� ������
		link* next; // ��������� �� ��������� ���������
	};
	~linkList();
private:
	link* first;
};

