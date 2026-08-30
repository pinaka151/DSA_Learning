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

20
30

--------------------------------------------
*/