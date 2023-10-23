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
};

int main(){
    Heap h;
    h.insert(20);
    h.insert(40);
    h.insert(30);
    h.insert(50);
    h.insert(15);

    h.print();


    return 0;
}


// MIHIRR42