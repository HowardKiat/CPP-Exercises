#pragma once
#include <iostream>
using namespace std;

struct stackLLnode {
    char data;
    stackLLnode* next;
};

class Stack_LL {
    stackLLnode* top;
    string stackname;
    int stacksize;

public:
    // Constructor
    Stack_LL(string stackname) {
        this->stackname = stackname;
        stacksize = 0;
        top = nullptr;
    }

    // Destructor
    ~Stack_LL() {
        while (!isEmpty()) {
            pop();
        }
        cout << "Stack of " << stackname << " is removed now!" << endl;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    stackLLnode* CreateNewNode(char character) {
        stackLLnode* newNode = new stackLLnode();
        newNode->data = character;
        newNode->next = nullptr;
        return newNode;
    }

    // Push algorithm
    void push(char character) {
        stackLLnode* newNode = CreateNewNode(character);
        if (top == nullptr) {
            top = newNode;
        }
        else {
            newNode->next = top;
            top = newNode;
        }
        stacksize++;
    }

    // Pop algorithm
    char pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return '\0';
        }
        stackLLnode* temp = top;
        char data = temp->data;
        top = top->next;
        delete temp;
        stacksize--;
        return data;
    }
};
