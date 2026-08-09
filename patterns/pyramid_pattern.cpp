#include <iostream>
using namespace std;

int main(){
     int num;
     cout<<"Enter the number: ";
     cin>>num;

// 6th pattern (Pyramid Pattern)

for(int i = 0; i<num;i++){
        //spaces: n-i-1
        for(int j = 0; j<num-i-1; j++){
            cout<<" ";
        }
        //num1: i+1
        for(int j = 1; j<= i+1 ; j++){
        cout<<j;
        }

        //num2: 
        for(int j = i; j>0;j--){
            cout<<j;
        } 
        cout<<endl;
    
}




return 0;
}


/*
---------------------Output---------------------------------------
Enter the number: 4

  1
  121
 12321
1234321



------------------------------------------------------------------
*/