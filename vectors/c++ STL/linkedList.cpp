#include<iostream>
#include <list>
using namespace std;

int main(){
    list <int> l;
    l.push_back(3);
    l.push_back(13);
    l.push_front(30);
    l.push_front(35);

    for(int val : l){
        cout<<val<<" ";

    }
cout<<endl;
}