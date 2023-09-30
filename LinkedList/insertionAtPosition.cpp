#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head , int d){
    Node *temp = new Node(d);
    temp -> next = head; 
    head = temp;
}

void insertAtTail(Node* &tail , int d){
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

// INSERTION AT POSITION ALGORITHM
void insertAtPosition(Node* &head , Node* &tail , int position , int d){
    if(position == 1){
        insertAtHead(head , d);
        return;
    }

    Node * temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail , d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}


// MIHIRR42
