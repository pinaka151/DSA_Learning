#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    int fact = 1;

    int i = num;
    while(i>0){

        fact = fact*i;

        i--;

    }

    cout<<"factorial of "<<num<<" is : "<<fact;

}