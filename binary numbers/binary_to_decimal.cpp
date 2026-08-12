#include <iostream>
using namespace std;


int binToDec(int num){
    int rem;
    int pow = 1;
    int dec=0;
    while(num>0){
        rem = num % 10;

        dec  += (rem*pow);

        pow *= 2;

        num = num /10;

        

    }

    return dec;
}

int main(){
     int num;
     cout<<"Enter the number: ";
     cin>>num;

     cout<<"The Decimal Number of "<<num<< " is = "<<binToDec(num);





    return 0;    
}

/*
--------------------Output-------------------------------------

Enter the number: 110001
The Decimal Number of 110001 is = 49

---------------------------------------------------------------
*/