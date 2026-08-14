#include <iostream>
using namespace std;

int main(){

        int arr[] = {20,32,4,53,6,765,43,4};
        int start = 0;
        int end = sizeof(arr)/sizeof(int);
        int size = end;


        // original array

         cout<<"Original array: ";
         for(int i = 0; i<size;i++){

            cout<<arr[i]<<" ";
        

        }
        cout<<endl;

        

        for(int i = 0; i<(size/2);i++){
            start = i;
            end = size -i -1;  // used size - i - 1 as size will be 8 for this and for first iteration it  will  be 0 that  means end = 8 and this index doesn't exist for this array
            swap(arr[start],arr[end]);
        }
    
      
        // Reversed Array
        cout<<"Reversed array: ";
        for(int i = 0; i<size;i++){

            cout<<arr[i]<<" ";
        

        }
        cout<<endl;
    


        return 0;
}

/*
---------------------Output---------------------------------------

Original array: 20 32 4 53 6 765 43 4 
Reversed array: 4 43 765 6 53 4 32 20 

------------------------------------------------------------------
*/