#include <iostream>
using  namespace std;

int prime_numbers(int n){

    int i = 2;
    bool flag = false;

    while(i*i<=n){
        if(n%i == 0){
            flag = true;
        }
        i++;
    }
        return flag;
}

int main(){

    int n ;
    cout<<"Enter the number: ";
    cin>>n;
    bool IsPrime = prime_numbers(n);
    if(IsPrime){
        cout<<"The Given Number "<<n<<" is Not a Prime Number";
     }else{
        cout<<"The Given Number "<<n<<" is a Prime Number";

     }

}


/*
---------------------Output---------------------------------------

Enter the number: 23
The Given Number 23 is a Prime Number

Enter the number: 28
The Given Number 28 is Not a Prime Number

------------------------------------------------------------------
*/