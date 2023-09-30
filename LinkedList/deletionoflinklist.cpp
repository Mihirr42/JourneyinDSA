#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
  
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    // DELETING FIRST NODE
    if (position == 1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    // DELETING ANY MIDDLE AND LAST NODE
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

        prev->next = curr->next;
        if (prev->next == NULL) // HANDLING LAST NODE DELETION
            tail = prev;
        curr->next = NULL;
        delete curr;
    }
  
}


// MIHIRR42
