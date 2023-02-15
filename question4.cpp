#include<iostream>
#include <cstdlib>
using namespace std;

class Node {
	private:
		int Data;
		Node *next;
		Node *prev;
	public:
		void insertAtHead(int x); 
		void insertAtTail(int x);
		void deleteFirstNode();
		void deleteLastNode();
		void print();
};

Node *Head;

void Node::insertAtHead(int x){
	Node *newNode = new Node();
	newNode->Data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	
	if(Head == NULL){
		Head = newNode;
	}else{
		Head->prev = newNode;
		newNode->next = Head;
		Head = newNode;
	}
	
}

void Node::insertAtTail(int x){
	Node *newNode = new Node();
	newNode->Data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	
	if(Head == NULL){
		Head = newNode;
	}else{
		Node *temp = Head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
	}
	
	
	
	
}

void Node::deleteFirstNode(){
	Head = Head->next;
	free(Head->prev);
	Head->prev = NULL;
}

void Node::deleteLastNode(){
	Node *temp = Head;
	Node *temp2;
	while(temp->next != NULL)
		temp = temp->next;
	temp2 = temp->prev;
	temp2->next = NULL;
	free(temp);
}

void Node::print(){
	Node *temp = Head;
	cout<<" Linked List: ";
	while(temp != NULL){
		cout<<temp->Data<<", ";
		temp = temp->next;
	}
}

int main(){
	
	Head = NULL;
	
	Node dList;
	
	dList.insertAtHead(10);
	dList.insertAtHead(91);
	dList.insertAtHead(6);
	dList.insertAtHead(12);
	dList.insertAtTail(13);
	dList.deleteLastNode();
	dList.print();
	
	return 0;
}
