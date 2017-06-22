#pragma once
class linkList
{
public:
	linkList();
	void additem(int d); // добавление элемента
	void addItemInvert(int d); // добавление элемента в конец списка
	void display(); // показ данных
	struct link // один элемент списка
	{
		int data; // некоторые данные
		link* next; // указатель на следующую структуру
	};
	~linkList();
private:
	link* first;
	int total;
	link* current;
};

