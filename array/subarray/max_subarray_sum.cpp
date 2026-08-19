#include <iostream>
using namespace std;

int main(){
   
    // This is not effiecient method it's time complexity is  o(n^2) so we will use kadane's method which is very efficient whose time complexity is o(n)
    int arr[] = {2,3,5,7,8,5,3};
    int n = sizeof(arr)/sizeof(int); 
    
    int max_sum = INT16_MIN;
   
    
    for(int i = 0; i<n;i++){
        int sum = 0;
        for(int j = i; j<n;j++){

            sum +=arr[j];
            max_sum = max(sum,max_sum);
        }
        
    }

    cout<<"Max sum = "<<max_sum<<endl;
    
    return 0;
}

/*
---------------Output-----------------------

int arr[] = {2,3,5,7,8,5,3};
Max sum = 33

--------------------------------------------
*/