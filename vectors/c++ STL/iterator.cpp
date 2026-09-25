#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vect = {1,34,5,3,6};
    vector <int> :: iterator it;
    for(it = vect.begin(); it!= vect.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    // Reverse Iterator
     for(auto hello = vect.rbegin(); hello!= vect.rend();hello++){ //we can create iterator with  just auto into for loop 
        cout<<*(hello)<<" ";
    }

}