#pragma once
#include "Stack.h"

template<class T>
class List_struct {
	struct Node {
		T data;
		Node* next;//��������� �� ��������� �������
	};

	Node* Head = nullptr;
	Node* Tail = nullptr;
	int count = -1;

public:
	List_struct() {
		for (size_t i = 0; i < count; i++)
		{
			addElement(3);
		}
	}
	//���������� ��������
	void addElement(T data) {
		Node* newElement = new Node;//������� ����� ������������ �������

		newElement->data = data;
		//if(cout == -1)
		if (Head == nullptr) {
			Tail = Head = newElement;
		}
		else {
			Tail->next = newElement;
			Tail = newElement;
		}
		Tail->next = nullptr;
		count++;
	}

	void printList() {
		Node* move = Head;
		for (size_t i = 0; i <= count; i++)
		{
			cout << move->data << ", ";
			move = move->next;
		}
		cout << endl;
	}

	int operator[](int index) {
		Node* move = Head;
		if (index < 0 || index > count || count == -1) {
			throw exception("Out of range");
		}

		for (size_t i = 0; i < index; i++)
		{
			move = move->next;
		}
		return move->data;
	}

	void pop() 
	{

		if (count == -1) 
		{
			throw exception("Out of range");
		}
		if (count == 0) 
		{
			delete Head;
			Head = Tail = nullptr;
			count = -1;
		}

		else
		{
			Node* move = Head;
			while (move->next != Tail) 
			{
				move = move->next;
			}
			delete Tail;
			Tail = move;
			Tail->next = nullptr;
			count--;
		}



	}

	///����������� �����(�������) pop() , ������� ������� ���� ������ � �����, � ���� ���������, ��� ������ �� github.
	//��� �����, ���������� ���� ��� � ���� ����� ������ � �������� ����� �� .h �����, ����� ����������, ��������� ������
	//� ������ github ��� �� ������ ��� ������ � ������ ���������. �� �������� ������ ������� � �������� �����������.
	
};
