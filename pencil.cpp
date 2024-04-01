// DZOOP!!!!!!!!.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include "List_struct.h"

int main()
{
	srand(time(NULL));
	List_struct<int> list;

	for (size_t i = 0; i < 20; i++)
	{
		list.addElement(rand() % 9 + 1);
	}

	list.printList();
	list.pop();
	list.printList();

	try {
		cout << list[6];

	}
	catch (exception& E) {
		cout << E.what() << endl;
	}



}
