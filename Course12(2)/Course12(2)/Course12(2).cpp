// Course12(2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Node
{
public:
	int value;
	Node* next;
};
void InsertAtBegining(Node* &head, int value)
{
	Node* new_node = new Node();
	new_node->value = value;
	new_node->next = head;
	head = new_node;

}
Node* Find(Node* head, int value)
{
	while (head != NULL)
	{
		if (head->value == value)
			return head;
		head = head->next;

	}
	return NULL;

}
void InsertAfter(Node* prev_node, int value)
{
	if (prev_node == NULL)
	{
		cout << "the given previous node cannot be NULL";
		return;
	}
	Node* new_node = new Node();
	new_node->value = value;
	new_node->next = prev_node->next;
	prev_node->next = new_node;


}
void InsertAtEnd(Node*&head, int value)
{
	Node* new_node = new Node();
	new_node->value = value;
	new_node->next = NULL;
	if (head == NULL)
	{
		head = new_node;
		return;
	}
	Node* LastNode = head;
	while (LastNode->next != NULL)
	{
		LastNode = LastNode->next;
	}
	LastNode->next = new_node;
	return;

}
void DeleteNode(Node*& head, int value)
{
	Node* Current = head,*prev = head;
	if (head == NULL)
	{
		return;
	}
	if (Current->value == value)
	{
		head = Current->next;
		delete Current;
		return;

	}
	while (Current != NULL && Current->value != value)
	{
		prev = Current;
		Current = Current->next;
	}
	if (Current == NULL) return;
		prev->next = Current->next;
	delete Current;

}


void PrintList(Node* head)
{
	cout << "\n";
	while (head != NULL)
	{
		cout << head->value << " ";
		head = head->next;
	}
}
int main()
{
	//Node* head = NULL;
	//InsertAtBegining(head, 1);
	//InsertAtBegining(head, 2);
	//InsertAtBegining(head, 3);
	//InsertAtBegining(head, 4);
	//InsertAtBegining(head, 5);


	////Node* N1 = Find(head, 2);
	Node* head = NULL;
	InsertAtEnd(head, 1);
	InsertAtEnd(head, 2);
	InsertAtEnd(head, 3);
	InsertAtEnd(head, 4);
	InsertAtEnd(head, 5);
	InsertAtEnd(head, 6);

	//InsertAtBegining(head, 0);


	PrintList(head);
	DeleteNode(head, 4);
	PrintList(head);


	//Node* N1 = NULL;
	//N1 = Find(head, 2);
	//InsertAfter(N1, 500);
	//PrintList(head);


	//if (N1 != NULL)
	//
	//	cout << "\nNode Found :-)\n";
	//else
	//	cout << "\nNode Is not Found :-(\n";





}

