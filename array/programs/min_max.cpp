#include <iostream>
using namespace std;

int main(){
    int num[10];
    cout<<"Enter 10 numbers: ";
    for(int i = 0; i<10;i++){
        cin>>num[i];
    }

    int greatest = num[0];
    int index_max = 0;
    int smallest = num[0];
    int index_min = 0;
    for(int i = 0; i<10;i++){
        if(num[i]>greatest){
            greatest = num[i];
            index_max = i;
        }

        if(num[i]<smallest){
            smallest = num[i];
            index_max = i;
        }
    }


    cout<<"The Greatest Number is = "<<greatest<<endl;
    cout<<"The Smallest Number is = "<<smallest<<endl;

    cout<<"The Greatest Number's index is = "<<index_max<<endl;
    cout<<"The Smallest Number's index is = "<<index_min<<endl;
    
    
}

/*
--------------------Output-------------------------------------

Enter 10 numbers: 12 24 42 98 8 99 86 432 8 10
The Greatest Number is = 432
The Smallest Number is = 8

---------------------------------------------------------------
*/