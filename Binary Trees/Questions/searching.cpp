// Searching character in a string

#include<iostream>
using namespace std;

int binarySearch(string arr[], string key, int size){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start) / 2;

    while(start <= end){

        if(arr[mid] ==  key){
            return mid;
        }

        else if(key>arr[mid]){
            start = mid+1;
        }

        else{
            end = mid-1;
        }

        mid = start + (end-start) / 2;
    }

    return -1;
}

int main(){
    int length;
    cout<<"Enter the size of string : ";
    cin>>length;

    string array[length];
    cout<<"Enter String : ";
    for(int i=0; i<length; i++){
        cin>>array[i];
    }

    string key;
    cout<<"Enter the key to search in the string : ";
    cin>>key;

    int result = binarySearch(array, key, length);

    if(result == -1){
        cout<<"Key Not Found!";
    }
    else{
        cout<<"Key Found at Index "<<result;
    }

    return 0;
}


// MIHIRR42
