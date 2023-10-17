// TAKING USER INPUT AND DISPLAYING ELEMENTS 

#include <iostream>
using namespace std;

const int max_n = 15;

class Stack {
public:
    int *arr;
    int top;

    Stack() {
        arr = new int[max_n];
        top = -1;
    }

    void push(int x){
        if(max_n - top > 1){
            top++;
            arr[top]=x;
        }
        else{
            cout<<"Stack Overflow"<<endl;
            return;
        }
    }

    void pop(){
        if(top >= 0){
            cout<<"Top element Popped: "<<arr[top]<<endl;
            top--;
        }
        else{
            cout<<"Stack is Empty."<<endl;
            return;
        }
    }

    bool isFull(){
        if(top == max_n-1)
            return true;
        else
            return false;
    }

    bool isEmpty(){
        if(top == -1)
            return true;
        else
            return false;
    }

    void display() {
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    int n;
    cin>>n;

    if(n > max_n)
        cout<<"Stack Overflow"<<endl; 

    else if(n==0)
        cout<<"Stack is Empty"<<endl;

    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        s.push(element);
    }

    s.display();

    if(!s.isEmpty()){
        s.pop();
        s.display();
    }

    return 0;
}


// MIHIRR42
