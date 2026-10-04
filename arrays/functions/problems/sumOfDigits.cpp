#include <iostream>
using  namespace std;

int sumOfDigits(int n){
    int temp = n;
    int rem;
    int sum = 0;
    while(temp>0){
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    return sum;
}

int main(){
    int n ;
    cout<<"Enter the  Number: ";
    cin>>n;
    cout<<"The sum of digits of "<<n<<" is = " <<sumOfDigits(n);

}

/*
---------------------Output---------------------------------------

Enter the  Number: 1134
The sum of digits of 1134 is = 9

------------------------------------------------------------------
*/