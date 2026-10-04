#include <iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age>=18){
        cout<<"you are Eligible to Vote"<<endl;
    } else{
        cout<<"You are  not Eligible to Vote"<<endl;
    }

    return 0;
    
}