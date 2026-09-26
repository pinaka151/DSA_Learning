#include<iostream>
#include<deque>
using namespace std;

int main(){  //double ended queue
    deque <int> d;
    d.push_back(3);
    d.push_back(13);
    d.push_front(30);
    d.push_front(35);

    for(int val : d){
        cout<<val<<" ";

    }
    cout<<endl;
}