#include <iostream>
using namespace std;

int sumOfN(int n){
    int sum = 0;
    for(int i = 1; i<=n;i++){

        sum = sum + i;
    
}

return sum;
}

int main(){
    // Taking input of N numbers
    int n ;
    cout<<"Enter the  Nth number: ";
    cin>>n;


    cout<<"The sum of 1 to "<<n<<" Numbers is = "<<sumOfN(n)<<endl;
    cout<<"The sum of 1 to "<<30<<" Numbers is = "<<sumOfN(30)<<endl;

    return 0;
}


/*
---------------------Output---------------------------------------

Enter the  Nth number: 20
The sum of 1 to 20 Numbers is = 210
The sum of 1 to 30 Numbers is = 465

------------------------------------------------------------------
*/