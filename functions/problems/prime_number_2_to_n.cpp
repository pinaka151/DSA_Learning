#include <iostream>
using namespace std;

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
    for( int i = 2; i<=n;i++){
    bool IsPrime = prime_numbers(i);
    if(IsPrime){
        cout<<"The Given Number "<<i<<" is Not a Prime Number"<<endl;
        cout<<endl;
     }else{
        cout<<"The Given Number "<<i<<" is a Prime Number"<<endl;
        cout<<endl;

     }
     }

}


/*
---------------------Output---------------------------------------

The Given Number 3 is a Prime Number

The Given Number 4 is Not a Prime Number

The Given Number 5 is a Prime Number

The Given Number 6 is Not a Prime Number

The Given Number 7 is a Prime Number

The Given Number 8 is Not a Prime Number

The Given Number 9 is Not a Prime Number

The Given Number 10 is Not a Prime Number

------------------------------------------------------------------
*/