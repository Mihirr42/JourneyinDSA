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

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }

    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// DELETION OF ELEMENT IN DOUBLY LINKED LIST ALGORITHM
void deleteNode(int position, Node *&head, Node *&tail)
{
    // DELETING FIRST NODE
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    // DELETING MIDDLE AND LAST ELEMENT
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;

        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        curr->prev = NULL;
        if (curr->next == NULL)
            tail = prev;

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


// MIHIRR42
