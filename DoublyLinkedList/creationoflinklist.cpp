#include <iostream>
using namespace std;

// CREATION OF A NODE
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

// TRAVERSING THE LIST
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// OBTAIN THE LENGTH OF LIST
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

// INPUT
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    print(head);

    cout << getLength(head);

    return 0;
}


// MIHIRR42
