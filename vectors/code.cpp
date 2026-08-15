#include <iostream>
#include <vector>
using  namespace std;

int main(){
    // vector<int> vec;//first way of vector initialization
    // vector<int> vec = {1,53,6}; //second way of vector initialization
    // vector<int> vec(3,0); //Third way of vector initialization, here 3 will be size and 0 is the value which will be on each place
    // cout<<vec[2]<<endl;



    // vector<char> vec = {'a','b','c','d'};

    // for( char i : vec){ //for each loop for vector where we have to set the data type of iteration same as the parent variable 
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // size
    // cout<<"size = "<<vec.size()<<endl;

    // // push back (will push at the end)
    // vec.push_back(89);
    // cout<<"size = "<<vec.size()<<endl;

    // //pop back (will pop from the end)
    // vec.pop_back();
    // cout<<"size = "<<vec.size()<<endl;

    // front (will return the front element from the  vector)
    // cout<<vec.front()<<endl;

    // // Back (will return the last element from the  vector)
    // cout<<vec.back()<<endl;

    // // At (it is same as  vec[index] )
    // cout<<vec.at(1)<<endl;






    // Capacity of a vector increases by 100%   

    vector<int> vec2 ;
    vec2.push_back(10);
    vec2.push_back(20);
    vec2.push_back(30);
    vec2.push_back(30);
    vec2.push_back(30);

    cout<<vec2.size()<<endl;
    cout<<vec2.capacity()<<endl;
     

    return 0;
}