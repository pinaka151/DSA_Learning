#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> vect,int target){
       int start = 0;
       int end = vect.size()-1;
   

       while(start<=end){
           int mid = (start+end)/2;
       
           if(vect[mid] < target ){
               start = mid+1;
               
           }
           else if(vect[mid] > target ){
               end = mid-1;
               
           }
           else if(vect[mid] == target){
  
               return mid;
  
            }

           

   }

    return -1;

}

int main(){
    vector <int> vect = {-3,6,8,9,10,11,12};


   int target;
   cout<<"Enter the target value = ";
   cin>>target;


   int targetFound = binarySearch(vect,target);

   if(targetFound == -1){
    cout<<"Target value is not present in the array"<<endl;
   }
   else{
     cout<<"Target value is present in the array at the "<<targetFound<<" index"<<endl;
   }






    return 0;
}

/*
---------------Output-----------------------

Enter the target value = 25
Target value is not present in the array


Enter the target value = 10
Target value is present in the array at the 4 index

--------------------------------------------
*/