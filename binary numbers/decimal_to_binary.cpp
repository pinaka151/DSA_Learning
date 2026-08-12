#include <iostream>
using  namespace std;


int dec_to_bin(int num){
    int rem =0;
    int power = 1;
    int binary = 0;

    while(num!=0){
        rem = num%2;

        binary += (rem*power);
        power *=10;

        num = num /2;


    }

    return binary;

}

int main(){
      int num;
     cout<<"Enter the number: ";
     cin>>num;

     cout<< dec_to_bin(num);

return 0;
}
/*
--------------------Output-------------------------------------

Enter the number: 23
10111


---------------------------------------------------------------
*/