#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Majority Element by sorting method

int main(){
    vector <int> vect = {2,3,4,2,3,4,2,2,2,2};
    int size = vect.size();

    int freq = 1;
    int ans = vect[0];
    sort(vect.begin(),vect.end());
    for(int i = 1;i<size;i++){
        if(vect[i] == vect[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = vect[i];
        }

        if(freq > size/2){
            cout<<ans<<" is the majority element from the given vector"<<endl;
        }
        
    }
return 0;
}


/*
---------------Output-----------------------

2 is the majority element from the given vector

--------------------------------------------
*/