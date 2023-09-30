#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// INSERTION AT TAIL ALGORITHM
void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    // EMPTY CASE HANDLING
    if (tail == NULL)
        tail = temp;

    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}


// MIHIRR42
