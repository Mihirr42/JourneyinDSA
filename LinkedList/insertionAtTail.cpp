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

// INSERTION AT TAIL ALGORITHM
void insertionAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *tail)
{
    Node *temp = tail;

    cout << "Tailinserted Linked List is : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// USER INPUT
int main()
{
    int data;
    cout << "Enter data of node1 : ";
    cin >> data;
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    int size;
    cout << "Enter the size of remaining linked list : ";
    cin >> size;

    cout << "Enter list elements : ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        insertionAtTail(tail, element);
    }

    print(head);
    return 0;
}


// MIHIRR42
