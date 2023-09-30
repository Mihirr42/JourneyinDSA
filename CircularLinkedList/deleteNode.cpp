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

void insertNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        Node *curr = tail;

        while (curr->data != element)
            curr = curr->next;

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// DELETION OF A NODE ALGORITHM
void deleteNode(Node *&tail, int value)
{
    // EMPTY CASE HANDLE
    if (tail == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    // NON EMPTY CASE
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        // TRAVERSING THE LIST
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 NODE CASE HANDLE
        if (curr == prev)
            tail = NULL;

        // > 2 NODE CASE HANDLE
        else if (tail == curr)
            tail = prev;

        curr->next = NULL;
        delete curr;
    }
}

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

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 6);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail, 3);
    print(tail);
    deleteNode(tail, 6);
    print(tail);
    deleteNode(tail, 4);
    print(tail);

    return 0;
}


// MIHIRR42
