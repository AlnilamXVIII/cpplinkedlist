// cpplinkedlist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "cpplinkedlist.h"
using namespace std;

int main(ListNode* start)
{
	//Node pointer; points to start of Linked List
	ListNode* ptr = start;		

	//Create new list node object
	ListNode* head = new ListNode;

	//Access data field in ListNode struct; assign value 18
	head->data = 18;

	//Output value of head
	cout << head->data << endl;

	//Pointer to next node
	head->next = ptr;

	ListNode* node2 = new ListNode;
	node2->data = 19;
	cout << node2->data << endl;
	node2->next = ptr;

	ListNode* node3 = new ListNode;
	node3->data = 20;
	cout << node3->data << endl;
	node3->next = ptr;

	ListNode* tail = new ListNode;
	tail->data = 21;
	cout << tail->data << endl;
	tail->next = nullptr;
}
