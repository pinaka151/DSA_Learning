#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int> vect){
    int str = 0;
    int n = vect.size();
    int end = n-1;

    if(n == 1){
        return vect[0];
    }

    while(str<=end){
        int mid = str + (end-str)/2;
        if(mid == 0 && vect[0] !=vect[1]){
            return vect[mid];
        }

        if(mid == n-1 && vect[n-1] !=vect[n-2]){
            return vect[mid];
        }

        if(mid%2 == 0){

            if(vect[mid -1] != vect[mid] && vect[mid+1] != vect[mid]){
                   return vect[mid];
               }
            else if(vect[mid - 1] == vect[mid]){
                   end = mid -1;
               }
            else{
                   str = mid +1;
               }

        }else{

            if(vect[mid -1] != vect[mid] && vect[mid+1] != vect[mid]){
                   return vect[mid];
               }
            else if(vect[mid - 1] == vect[mid]){
                   str = mid +1;
               }
            else{
                   end = mid -1;
               }

        }

       
    }

    return -1;

}

int main(){
    vector<int> vect = {3,3,7,7,10,11,11};

    int duplicate = singleNonDuplicate(vect);
    cout<<"The Single Non Duplicate value from the vector = "<<duplicate<<endl;
    
    return 0;
}

/*
---------------Output-----------------------

The Single Non Duplicate value from the vector = 10

--------------------------------------------
*/
