#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int *arr;
    int top;

    Stack(int size)
    {
        this->size = size;   // TOP AND BOTTOM SIZE
        arr = new int[size]; // INITIALIZE THE ARRAY
        top = -1;            // INITIALIZE STACK IS EMPTY
    }

    // PUSH OPERATION
    void push(int element)
    {
        if (size - top > 1)
        { // CHECK IF SPACE IS AVAILABLE
            top++;
            arr[top] = element;
        }

        else
            cout << "Stack Overflow" << endl;
    }

    // POP OPERATION
    void pop()
    { // CHECK IF STACK IS EMPTY
        if (top >= 0)
            top--;

        else
            cout << "Stack Underflow" << endl;
    }

    // PEAK OR TOP ELEMENT
    int peak()
    {
        if (top >= 0)
            return arr[top];

        else
            cout << "Stack is Empty" << endl;
    }

    // STACK EMPTY OR NOT
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

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(45);
    st.push(46);
    //	st.push(47);                // overflow , else condition reached

    cout << "Top is : " << st.peak() << endl;

    st.pop();
    cout << "Now Top is : " << st.peak() << endl;

    st.pop();
    cout << "Now Top is : " << st.peak() << endl;

    st.pop();
    cout << "Now Top is : " << st.peak() << endl;

    // EMPTY CONDITION CHECK
    if (st.isEmpty())
        cout << "Stack is Empty";
    else
        cout << "Stack is not Empty";

    return 0;
}


// MIHIRR42
