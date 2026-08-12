#include <iostream>
using namespace std;




int main(){
     int a = 4 ;
     int b = 9;


    // Bitwise and,or,xor
    cout<<" Bitwise AND  = "<<(a&b)<<endl;
    cout<<" Bitwise OR  = "<<(a|b)<<endl;
    cout<<" Bitwise XOR  = "<<(a^b)<<endl;

    
     cout<<(6&10)<<endl;
     cout<<(6|10)<<endl;
     cout<<(6^10)<<endl;
    
    // Bitwise left,right shift
    cout<<" Bitwise left shift (for 4)  = "<<(a<<1)<<endl;
    cout<<" Bitwise left shift (for 9) = "<<(b<<1)<<endl;
    cout<<" Bitwise right shift (for 4) = "<<(a>>1)<<endl;
    cout<<" Bitwise right shift (for 9) = "<<(b>>1)<<endl;

    







    return 0;    
}

/*
--------------------Output-------------------------------------

Bitwise AND  = 0
Bitwise OR  = 13
Bitwise XOR  = 13
2
14
12
 Bitwise left shift (for 4)  = 8
 Bitwise left shift (for 9) = 18
 Bitwise right shift (for 4) = 2
 Bitwise right shift (for 9) = 4

---------------------------------------------------------------
*/