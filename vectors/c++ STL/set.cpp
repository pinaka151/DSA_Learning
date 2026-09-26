#include<iostream>
#include<set>
using namespace std;

int main(){  //double ended queue
    set<int> d;
    d.insert(3);
    d.insert(13);
    d.insert(30);
    d.insert(35);

    // cout<<*(d.lower_bound(4))<<endl; // this says lower bound is 4 or just above
    // cout<<*(d.upper_bound(4))<<endl; // this says upper bound is above 4

    cout<<*(d.lower_bound(13))<<endl; 
    cout<<*(d.upper_bound(13))<<endl; 

    for(int val : d){
        cout<<val<<" ";
    }
    cout<<endl;
}