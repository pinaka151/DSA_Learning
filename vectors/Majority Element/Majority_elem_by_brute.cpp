#include <iostream>
#include<vector>
using namespace std;

int Majority_elem(vector <int> vect,int size){
    int count = 0;
   

    for(int elem : vect){

        for(int i = 0; i<size;i++){
            if(vect[i]==elem){
                count++;
            }
        }

        if(count>size/2){
            return elem;
        }

        count = 0;
    }
}

int main(){
    vector <int> vect = {1,2,1,1,4,4,4,4,4};
    int size = vect.size();

    int maj_elem = Majority_elem(vect,size);

    cout<<maj_elem<<" is the majority element from the given vector"<<endl;


    return 0;

}


/*
---------------Output-----------------------

4 is the majority element from the given array

--------------------------------------------
*/