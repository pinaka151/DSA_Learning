#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){

    string str;
    cout<<"Enter the string: ";
    cin>>str;

    string anotherstr = str;

    reverse(str.begin(),str.end());

    if(str == anotherstr){
        cout<<"The given string '"<< anotherstr<<"' is a palindrome"<<endl;
    }else{
        cout<<"The given string '"<< anotherstr<<"' is not a palindrome"<<endl;
    }


}