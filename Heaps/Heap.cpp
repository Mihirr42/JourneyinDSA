#include<iostream>
#include<queue>
using namespace std;

int main(){
    // MAX HEAP
    cout<<endl;
    priority_queue<int> pq;

    pq.push(10);
    pq.push(74);
    pq.push(40);
    pq.push(68);

    cout<<"Element at the top : "<<pq.top()<<endl;
    pq.pop();
    cout<<"Element at the top : "<<pq.top()<<endl;
    cout<<"Size is : "<<pq.size()<<endl;
    if(pq.empty())
        cout<<"pq is Empty"<<endl;
    else
        cout<<"pq is not Empty"<<endl;
    cout<<endl;
    



    // MIN HEAP
    priority_queue< int, vector<int>, greater<int> > minHeap;

    minHeap.push(10);
    minHeap.push(74);
    minHeap.push(40);
    minHeap.push(68);

    cout<<"Element at the top : "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"Element at the top : "<<minHeap.top()<<endl;
    cout<<"Size is : "<<minHeap.size()<<endl;
    if(minHeap.empty())
        cout<<"minHeap is Empty"<<endl;
    else
        cout<<"minHeap is not Empty"<<endl;

    return 0;
}


// MIHIRR42
