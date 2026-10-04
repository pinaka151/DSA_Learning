#include <iostream>
using namespace std;

// Calculating n!
int nfact(int n){

    if(n <= 1){
        return 1;
    }

    return n*nfact(n-1);
}

// calculating r!
int rfact(int r){

    if(r <= 1){
        return 1;
    }

    return r*rfact(r-1);
}

// calculating (n-r)!
int n_rfact(int nMinusr){

    if(nMinusr <= 1){
        return 1;
    }

    return nMinusr*n_rfact(nMinusr-1);
}

// calculating nCr
int nCr(int n, int r){

    int N = nfact(n);
    int R = rfact(r);
    int NminusR = n_rfact(n-r);

    return (N)/(R*(NminusR));

}

int main(){
    // Taking innput of N numbers
    int n ;
    cout<<"Enter the n: ";
    cin>>n;

    int r ;
    cout<<"Enter the r: ";
    cin>>r;

    cout<<"nCr = "<<nCr(n,r)<<endl;


    return 0;
}


/*
---------------------Output---------------------------------------

Enter the n: 6
Enter the r: 3
nCr = 20

------------------------------------------------------------------
*/