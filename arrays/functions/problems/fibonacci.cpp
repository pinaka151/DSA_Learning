#include <iostream>
using namespace std;

int fibonacci(int n){
    int a = 0;
    int b = 1;
    int sum = 0;

    cout<<a<<endl;
    cout<<b<<endl;

    int i = 1;
    while(i<=n-2){
        sum = a+b;
        cout<<sum<<endl;

        a = b;
        b = sum;
        i++;
    }


}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    fibonacci(n);
    
    return 0;
}

/*
---------------------Output---------------------------------------

Enter the number: 10
0
1
1
2
3
5
8
13
21
34
------------------------------------------------------------------
*/