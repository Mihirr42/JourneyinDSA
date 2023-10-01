#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int> d;

    d.push_front(12);                   // PUSH AT THE FRONT OF QUEUE
    d.push_front(13);
    d.push_front(18);
    d.push_front(20);
    d.push_back(14);                   // PUSH AT THE BACK OF QUEUE
    
    cout<<d.front()<<endl;               // DISPLAY FRONT ELEMENT
    cout<<d.back()<<endl;               // DISPLAY BACK ELEMENT

    d.pop_front();                       // POP FRONT ELEMENT
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_back();                        // POP BACK ELEMENT

    // ERASE ANY ELEMENT
    d.erase(d.begin());                 // 1ST ELEMENT ERASE
    d.erase(d.begin() , d.begin()+2);   //  REMAINING 1ST 2 ELEMENT ERASE

    // CLEARS THE QUEUE
    d.clear();

    if(d.empty())                       // CHECK IF THE QUEUE IS EMPTY
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty";

    return 0;
}


// MIHIRR42
