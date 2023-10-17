// PRINTING THE POP ELEMENT AND DISPLAYING STACK ELEMENTS

#include <iostream>
using namespace std;

class Stack
{
public:
    const int MAX_SIZE = 100;
    int *arr;
    int top;

    Stack()
    {
        arr = new int[MAX_SIZE];
        top = -1;
    }

    void push(int item)
    {
        if (MAX_SIZE - top > 1)
        {
            top++;
            arr[top] = item;
            cout << "Element " << item << " pushed onto the stack." << endl;
        }

        else
            cout << "Stack Overflow. Cannot push more elements." << endl;
    }

    void pop()
    {
        if (top >= 0)
        {
            cout << "Element " << arr[top] << " popped from the stack." << endl;
            top--;
        }

        else
            cout << "Stack Underflow. Cannot perform pop operation." << endl;
    }

    void display()
    {
        if (top == -1)
            cout << "Stack is Empty" << endl;
        else
        {
            cout << "Elements in the stack : ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main()
{
    Stack stack;
    int choice, item;

    while (true)
    {

        cin >> choice;

        switch (choice)
        {
        case 1:
            cin >> item;
            stack.push(item);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.display();
            break;
        case 4:
            cout << "Exiting the program." << endl;
            return 0;
        default:
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}


// MIHIRR42
