#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value)
    {
        // IF QUEUE IS FULL
        if ( (front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)) )
            return false;

        else if (front == -1)           // 1ST POSITION INSERTION
            front = rear = 0;

        else if (rear == size - 1 && front != 0)    // IN MIDDLE
            rear = 0;

        else                                        // NORMAL INSERTION
            rear++;

        arr[rear] = value;
        return true;
    }

    int dequeue()
    {
        if (front == -1)                //EMPTY CASE
            return -1;

        int ans = arr[front];
        arr[front] = -1;

        if (front == rear)              // POPPING 1ST ELEMENT
            front = rear = -1;

        else if (front == size - 1)     // MAINTAINING CYCLIC NATURE OF QUEUE
            front = 0;

        else                            // NORMAL POP
            front++;

        return ans;
    }
};

