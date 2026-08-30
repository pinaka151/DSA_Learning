#include <iostream>
using namespace std;

int changeA(int* ptr){ //pass by reference
    *ptr = 20;

}
int changeA_byalias(int &c){ //pass by reference alias
    c = 30;

}


int main(){
    int a = 10;
    int b = 5;
    changeA(&a);
    changeA_byalias(b);
    cout<<a<<endl;
    cout<<b<<endl;


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