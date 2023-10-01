#include <iostream>
#include <stack>
using namespace std;

// STACK - LAST IN FIRST OUT(LIFO) DATA STRUCTURE
int main()
{
    // CREATION OF STACK
    stack<int> s, t;

    // PUSH OPERATION
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // TOP MOST ELEMENT
    cout << "Element at the top of stack is : " << s.top() << endl;

    // POP OPERATION
    s.pop();

    cout << "Element at the top of stack is : " << s.top() << endl;

    // EMPLACE - Construct and insert new element At The Top of STACK
    s.emplace(24);

    cout << "Element at the top of stack is : " << s.top() << endl;

    // SIZE OF THE STACK
    cout << "Size of the stack is : " << s.size() << endl;

    // USING SWAP FUNCTION
    t.push(52);
    t.push(58);

    s.swap(t);

    cout << "Size of the stack is : " << s.size() << endl;
    cout << "Size of the stack is : " << t.size() << endl;

    // Check EMPTY
    if (s.empty())
        cout << "Stack is Empty." << endl;
    else
        cout << "Stack is Not Empty." << endl;

    return 0;
}


// MIHIRR42
