#include<iostream>
using namespace std;

void Heapify(int arr[], int size, int index){

    int largest = index;
    int left = 2*index;             // left child
    int right = 2*index+1;           // right child

// CHECKING FOR CORRECT POSITION
    if(left<=size && arr[largest] < arr[left])
        largest = left;

    if(right<=size && arr[largest] < arr[right])
        largest = right;

// IF FOUND THEN SWAP IT WITH ROOT ELEMENT
    if(largest != index){
        swap(arr[largest] , arr[index]);
        // AGAIN CALL THE FUNCTION TO VERIFY IT AFTER SWAPPING
        Heapify(arr , size, largest);
    }
}

void HeapSort(int arr[] , int size){

    while(size > 1){
        // 1st swap and delete last element
        swap(arr[size], arr[1]);
        size--;

        // Correct the position
        Heapify(arr , size, 1);
    }
}


int main(){
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n=5;

    // Heap Creation
    for(int i=n/2; i>0; i--)
        Heapify(arr, n, i);

    cout<<"Printing the array : ";
    for(int i=1; i<=n; i++)
        cout<<arr[i]<<" ";

    // HEAP SORT
    HeapSort(arr , n);

    cout<<"\nSORTED ARRAY IS : ";
    for(int i=1; i<=n; i++)
        cout<<arr[i]<<" ";

    return 0;
}

// MIHIRR42
