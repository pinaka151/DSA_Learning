#include <iostream>
using namespace std;

int main(){
   

    int arr[] = {2,3,5,7,8,5,3};
    int n = sizeof(arr)/sizeof(int); 
    
    for(int i = 0; i<n;i++){
        for(int j = i; j<n;j++){
            for(int k = i; k<=j;k++){
            cout<<arr[k];
        }
        cout<<" ";
            
        }
        cout<<endl;
        
    }
    
    return 0;
}

/*
---------------Output-----------------------

2 23 235 2357 23578 235785 2357853 
3 35 357 3578 35785 357853 
5 57 578 5785 57853 
7 78 785 7853 
8 85 853 
5 53 
3 

--------------------------------------------
*/