#include <iostream>
#include <vector>
using  namespace std;

int main(){
    // vector<int> vec;//first way of vector initialization
    // vector<int> vec = {1,53,6}; //second way of vector initialization
    // vector<int> vec(3,0); //Third way of vector initialization, here 3 will be size and 0 is the value which will be on each place
    // cout<<vec[2]<<endl;



    vector<char> vec = {'a','b','c','d','e'};

    for( char i : vec){ //for each loop for vector where we have to set the data type of iteration same as the parent variable 
        cout<<i<<" ";
    }




    return 0;
}