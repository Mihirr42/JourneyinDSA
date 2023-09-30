#include <iostream>
using namespace std;

// CREATING A NODE USING CPP CLASS
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

// ADDING AND PRINTING ELEMENTS OF NODE
int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    cout << node1->data << endl;
    cout << node1->next << endl;
    cout << node2->data << endl;
    cout << node2->next << endl;
    return 0;
}


// MIHIRR42
