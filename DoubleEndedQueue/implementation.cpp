#include <iostream>
using namespace std;

class Deque
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool pushFront(int x)
    {
        if (front == 0 && rear == size - 1 || front != 0 && (rear == (front - 1) % (size - 1)))
            return false;

        else if (front == -1)
            front = rear = 0;

        else if (front == 0 && rear != size - 1)
            front = size - 1;

        else
            front--;

        arr[front] = x;
        return true;
    }

    bool pushRear(int x)
    {
        // FULL CONDITION CHECK
        if (front == 0 && rear == size - 1 || front != 0 && (rear == (front - 1) % (size - 1)))
            return false;

        // EMPTY CONDITION CHECK
        else if (front == -1)
            front = rear = 0;

        // MAINTAINING CYCLIC NATURE
        else if (front != 0 && rear == size - 1)
            rear = 0;

        // NORMAL FLOW
        else            
            rear++;

        arr[rear] = x;           // PUSH THE ELEMENT
        return true;
    }

    int popFront()
    {

        if (front == -1)
            return -1;

        int ans = arr[front];
        arr[front] = -1;

        if (front == rear)
            front = rear = -1;

        else if (front == size - 1)
            front = 0;

        else
            front++;

        return ans;
    }

    int popRear()
    {

        if (front == -1)
            return -1;

        int ans = arr[rear];
        arr[rear] = -1;

        if (front == rear)
            front = rear = -1;

        else if (rear == 0)
            rear = size - 1;

        else
            rear--;

        return ans;
    }

    int getFront()
    {
        if (isEmpty())
            return -1;

        else
            return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
            return -1;

        return arr[rear];
    }

    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (front == 0 && rear == size - 1 || front != 0 && (rear == (front - 1) % (size - 1)))
            return true;
        else
            return false;
    }
};


// MIHIRR42
