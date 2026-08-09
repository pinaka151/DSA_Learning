#include <iostream>
using namespace std;

int main(){
     int num;
     cout<<"Enter the number: ";
     cin>>num;

// 7th Pattern (Hollow diamond)
// Top
for(int i = 0; i<num;i++){
    // Spaces
    for(int j = 0;j<num-i-1;j++){
        cout<<" ";
        }
        cout<<"*";
   

     if(i != 0){
        //spaces
        for(int j = 0; j<2*i-1;j++){

            cout<<" ";


        }
        cout<<"*";
     }
     
     cout<<endl;

}

// Bottom

for(int k = 0; k<num-1;k++){

    for(int j = 0; j<=k;j++){
        cout<<" ";
    }
    cout<<"*";


    for(int j = 0; j<2*(num-2 - k) - 1 ; j++){

        cout<<" ";


    }
    if(k != num -2){
    cout<<"*";
    }

    cout<<endl;






}



return 0;
}


/*
---------------------Output---------------------------------------
Enter the number: 4
   *
  * *
 *   *
*     *
 *   *
  * *
   *

------------------------------------------------------------------
*/