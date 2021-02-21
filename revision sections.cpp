#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int value) {
	Node* new_Node = new Node;
	new Node->data = value;

}
