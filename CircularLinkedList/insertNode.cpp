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

// INSERTING NODE IN A CIRCULAR LINKED LIST
void insertNode(Node *&tail, int element, int d)
{
    // EMPTY CASE HANDLE
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    // NON EMPTY CASE INSERTION
    else
    {
        Node *curr = tail;

        // TRAVERSING
        while (curr->data != element)
            curr = curr->next;

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// TRAVERSING THE CIRCULAR LIST
void print(Node *tail)
{
    Node *temp = tail;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (tail != temp);

    cout << endl;
}

// INPUT
int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 6);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);

    return 0;
}


// MIHIRR42
