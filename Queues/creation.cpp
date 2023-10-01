#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // CREATION OF QUEUE
    queue<int> q, r;

    // PUSH OPERATION
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // FRONT ELEMENT
    cout << "Element at the front of queue is : " << q.front() << endl;

    // LAST ELEMENT
    cout << "Element at the last of queue is : " << q.back() << endl;

    // POP OPERATION
    q.pop();

    cout << "Element at the front of queue is : " << q.front() << endl;

    // EMPLACE - Construct and insert new element At The Last of QUEUE
    q.emplace(24);

    cout << "Element at the front of queue is : " << q.back() << endl;

    // SIZE OF THE QUEUE
    cout << "Size of the queue is : " << q.size() << endl;

    // USING SWAP FUNCTION
    r.push(52);
    r.push(58);

    q.swap(r);

    cout << "Size of the queue is : " << q.size() << endl;
    cout << "Size of the queue is : " << r.size() << endl;

    // Check EMPTY
    if (q.empty())
        cout << "Queue is Empty." << endl;
    else
        cout << "Queue is Not Empty." << endl;

    return 0;
}


// MIHIRR42
