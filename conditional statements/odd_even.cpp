#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num%2 == 0){
        cout<<"The given number "<<num<<" is Even"<<endl;

    }else{
        cout<<"The given number "<<num<<" is odd"<<endl;
    }

    return 0;
}