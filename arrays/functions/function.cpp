#include <iostream>
using namespace std;

int printhello(){
    cout<<"Hello world!"<<endl;
    return 3;
}

int sum1(int a ,int b){  // giving value in  arguments while calling
    return a + b;

}
int sum2(int a = 3,int b =7){  // giving a default value if user doesn't give value while calling the function then this value will be default
    return a + b;

}


// Minimum of Two values

int minoftwo(int a, int b){
    if(a>b){
        return a;
    }else{
        return  b;
    }
}

int main(){
    int value = printhello();
    // cout<<value<<endl;
    // cout<<sum1(2,4)<<endl;
    // cout<<sum2(2,14)<<endl;
    // cout<<sum2()<<endl;
    cout<<minoftwo(4,0)<<endl;

    return 0;
}