#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // CONSTRUCTOR
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// INSERTION AT HEAD ALGORIITHM
void insertionAtHead(Node *&head, int d)
{
    // NEW NODE CREATION
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// PRINTING THE LINKED LIST ALGO
void print(Node *head)
{
    Node *temp = head;

    cout << "Headinserted Linked List is : ";
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
    int size;
    cout << "Enter the size of linked list : ";
    cin >> size;
    Node *head = NULL;

    cout << "Enter list elements : ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        insertionAtHead(head, element);
    }

    print(head);

    return 0;
}


// MIHIRR42
