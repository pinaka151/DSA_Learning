#include<iostream>
using namespace std;

int gcd(int a , int b){
    while(a>0 && b>0){
        if(a>b){
           a = a%b;
        }else{
           b = b%a;
        }
    }

    if(a>0){
        return a;
    }else{
        return b;
    }
       

}

int main(){
    cout<<gcd(27,9)<<endl;
    return 0;
}