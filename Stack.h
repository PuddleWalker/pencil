#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class Stack {
    // Ниженяя и верхняя границы стека
    enum { EMPTY = -1, FULL = 254 };
    // Массив для хранения данных
    char st[FULL + 1];
    //Указатель на вершину стека
    int top;

public:

    Stack() {
        top = EMPTY;
    }

    void push(char h);

    char pop();

    void clear();

    bool isEmpty();

    bool isFull();

    int getCount();

};

void Stack::clear() {
    top = EMPTY;
}

bool Stack::isEmpty() {
    return top == EMPTY;
}

bool Stack::isFull() {
    return top == FULL;
}

int Stack::getCount() {
    return top + 1;
}

void Stack::push(char h) {
    if (!isFull()) {
        st[++top] = h;
    }
}

char Stack::pop() {
    if (!isEmpty()) {
        return st[top--];
    }
    return '-';
}