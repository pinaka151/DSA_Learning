#include <iostream>
using namespace std;


int main(){
    // int a = 10;
    // cout<<"Address of variable a = "<<&a<<endl;

    // // pointer
    // int * ptr = &a;
    // cout<<"Address Stored in ptr of a = "<<ptr<<endl;

    // // Pointer to Pointer we have to use **
    // int** ptr2 = &ptr;
    // cout<<"Address Stored in ptr2 of ptr (pointer to pointer) = "<<ptr2<<endl;

    // // Dereference Operator

    // cout<<*(&a)<<endl;
    // cout<<*(ptr2)<<endl;

    // // Double Dereference Operator
    // cout<<**(ptr2)<<endl;


    // Null Pointer

    // int* ptr3; // It will give garbage value
    // cout<<ptr3<<endl;

    // int* ptr3 = NULL;
    // cout<<ptr3<<endl;






    // Quiz

    int a = 5;
    int* p = &a;
    int** q = &p;

    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;

    return 0;
}

/*
---------------Output-----------------------

Address of variable a = 0x61ff08
Address Stored in ptr of a = 0x61ff08
Address Stored in ptr2 of ptr (pointer to pointer) = 0x61ff04
10
0x61ff08
10
0

--------------------------------------------
*/