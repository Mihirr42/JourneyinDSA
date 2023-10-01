#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // CHECK EMPTY
    bool isEmpty()
    {
        if (front == rear)
            return true;
        else
            return false;
    }

    // ENQUEUE OR PUSH ALGO
    void enqueue(int element)
    {
        if (rear == size)
            cout << "Queue is full." << endl;

        else
        {
            arr[rear] = element;
            rear++;
        }
    }

    // DEQUEUE OR POP ALGO
    int dequeue()
    {
        if (front == rear)
            return -1;

        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;

            // REPOSITION THE BLANK SPACES CREATED AT THE START OF THE QUEUE
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    // FRONT OR TOP OF THE QUEUE
    void fronte()
    {
        if (front == rear)
            cout << "Queue is Empty!" << endl;

        cout << arr[front];
    }
};

int main()
{
    Queue q(5);

    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);

    cout << "Front of the queue is : ";
    q.fronte();

    q.dequeue();

    cout << "\nFront of the queue is : ";
    q.fronte();

    cout << endl;

    if (q.isEmpty())
        cout << "Queue is Empty." << endl;
    else
        cout << "Queue is Not Empty." << endl;

    return 0;
}


// MIHIRR42
