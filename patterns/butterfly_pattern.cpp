#include <iostream>
using namespace std;

int main(){
     int num;
     cout<<"Enter the number: ";
     cin>>num;


// 8th pattern (Butterfly pattern)

// Top
for(int i = 1; i<=num;i++){

    // Left
    for(int j = 1; j<=i;j++){
            cout<<"*";
    }

    for(int k = 1; k<=num-i;k++){
            cout<<" ";
    }

    // Right

    for(int j = 1;j<=num-i;j++){
        cout<<" ";
    }

    for(int k = 1;k<=i;k++){
        cout<<"*";
    }

        cout<<endl;

}



// Bottom
for(int i = 0; i<num;i++){
    // Left
    for(int j = num; j>i;j--){
            cout<<"*";
    }

    for(int k = num; k>num-i;k--){
            cout<<" ";
    }

    // Right

    for(int k = num; k>num-i;k--){
            cout<<" ";
    }

    for(int j = num; j>i;j--){
            cout<<"*";
    }

        cout<<endl;

}


return 0;
}


/*
---------------------Output---------------------------------------

Enter the number: 4

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

------------------------------------------------------------------
*/