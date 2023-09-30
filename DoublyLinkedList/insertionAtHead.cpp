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

// INSERTION AT HEAD ALGORITHM
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    // EMPTY CASE
    if (head == NULL)
    {
        head = temp;
    }

    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

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

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

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
        insertAtHead(head, element);
    }

    print(head);

    int length = getLength(head);
    cout << "Length of the doubly linked list is : " << length;

    return 0;
}


// MIHIRR42
