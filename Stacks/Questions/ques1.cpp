// MAX_SIZE IS GIVEN AND USE SWITCH CASE FOR DIFFERENT OPERATIONS ON STACK

#include <iostream>
using namespace std;

class Stack
{
public:
    const int MAX_SIZE = 10;
    int *arr;
    int top;

    Stack()
    {
        arr = new int[MAX_SIZE];
        top = -1;
    }

    void push(int element)
    {
        if (MAX_SIZE - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
            cout << "Stack Overflow" << endl;
    }

    int pop()
    {
        if (top >= 0)
        {
            top--;
            return arr[top];
        }

        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isFull()
    {
        if (top == MAX_SIZE - 1)
            return true;

        else
            return false;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;

        else
            return false;
    }
};

int main()
{
    Stack s;
    int choice, item;

    while (1)
    {
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin >> item;
            s.push(item);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            if (s.isFull())
                cout << "Stack is Full!" << endl;
            else
                cout << "Stack is not Full!" << endl;
            break;
        case 4:
            if (s.isEmpty())
                cout << "Stack is Empty!" << endl;
            else
                cout << "Stack is not Empty!" << endl;
            break;
        case 5:
            exit(0);

        default:
            cout << "Invalid Choice!!" << endl;
        }
    }

    return 0;
}


// MIHIRR42
