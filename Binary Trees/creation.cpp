#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// CREATION OF TREE
Node *buildTree(Node *root)
{
    cout << "Enter the data : ";
    int d;
    cin >> d;
    root = new Node(d);

    if (d == -1)
        return NULL;

    cout << "Enter data for inserting in the left of " << d << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in the right of " << d << endl;
    root->right = buildTree(root->right);

    return root;
}

// PRINTING OR REPRESENTING THE TREE
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // separater

    while (!q.empty())
    {

        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // Before Level Is Completely Traversed
            cout << endl;
            if (!q.empty()) // If the queue has still child nodes apply separater
                q.push(NULL);
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);

    cout << "\nPrinting the level order traversal tree : \n";
    levelOrderTraversal(root);

    return 0;
}


// MIHIRR42
