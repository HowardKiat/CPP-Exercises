#pragma once
#include <iostream>
using namespace std;

struct queuenode //singly linked list, data to receive
{
	char data;
	queuenode* next;
};

class QueueLinkedList
{
	queuenode* front, * rear;
	int queuesize;
	string queueName = "";

public:
	QueueLinkedList(string queueName)
	{
		front = rear = nullptr;
		queuesize = 0;
		this->queueName = queueName;
	}
	
	~QueueLinkedList()
	{
		cout << queueName << " is deleted from the memory!" << endl;
	}
	
	bool isEmpty()
	{
		return front == nullptr;; // Return the Front
	}
	
	//step 4: create the enqueue algorithm in the function
	queuenode* CreateNewNode(char character)
	{
		queuenode* newNode = new queuenode();
		newNode->data = character;
		newNode->next = nullptr;

		return newNode;
	}
	
	void enqueue(char character)
	{
		queuenode* newNode = CreateNewNode(character);

		if (rear == nullptr)
		{
			front = rear = newNode;
		}
		else
		{
			rear->next = newNode;
			rear = newNode;
		}
		queuesize++;
	}

	//step 5: create the dequeue algorithm in the function
	char dequeue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty" << endl;
			return '\0';
		}
		queuenode* temp = front;
		char data = temp->data;
		front = front->next;

		if (front == nullptr)
		{
			rear = nullptr;
		}
		delete temp;
		queuesize--;
		return data;
	}
};