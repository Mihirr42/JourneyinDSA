#include<iostream>
using namespace std;

class Heap{

public:
    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        // incrrementing the size
        size += 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }

            else
                return;
        }
    }


    void print(){
        for(int i = 0; i<=size; i++){
            cout<<arr[i]<<" ";
        } cout<<endl;
    }


    void deleteFromHeap(){
        // BASE CASE IF HEAP IS EMPTY THEN
        if(size == 0){
            cout<<"Heap is Empty"<<endl;
            return;
        }

        // Exchanging the root element and last element
        arr[1] = arr[size];

        // delete the last node now
        size--;

        // navigate the root element to its correct position
        int index = 1;
        while(index < size){
            int leftIndex = 2*index;
            int rightIndex = 2*index+1;

            if(leftIndex<=size && arr[index]<arr[leftIndex] && arr[leftIndex]>arr[rightIndex]){
                swap(arr[index] , arr[leftIndex]);
                index = leftIndex;
            }

            else if(rightIndex<=size && arr[index]<arr[rightIndex] && arr[rightIndex]>arr[leftIndex]){
                swap(arr[index] , arr[rightIndex]);
                index = rightIndex;
            }

            else
                return;
        }
    }
};

int main(){
    Heap h;
    h.insert(20);
    h.insert(40);
    h.insert(30);
    h.insert(50);
    h.insert(15);

    h.print();

    h.deleteFromHeap();
    cout<<"\nAfter deleting heap elements : ";
    h.print();


    return 0;
}


// MIHIRR42
