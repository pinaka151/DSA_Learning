#include <iostream>
using namespace std;

int fact(int n){

    if(n <= 1){
        return 1;
    }

    return n*fact(n-1);
}

int main(){
    // Taking innput of N numbers
    int n ;
    cout<<"Enter the  Nth number: ";
    cin>>n;


   
    cout<<"The Factorial of first "<<n<<" Numbers is = "<<fact(n)<<endl;
    cout<<"The Factorial of first "<<10<<" Numbers is = "<<fact(10)<<endl;

    return 0;
}

/*
---------------------Output---------------------------------------

Enter the  Nth number: 5
The Factorial of first 5 Numbers is = 120
The Factorial of first 10 Numbers is = 3628800
------------------------------------------------------------------
*/