#include<iostream>
#include<cctype>
using namespace std;

    // bool isAlphaNum(char ch){
    //     if((ch>='0'&& ch<='9')||(tolower(ch)>='a' && tolower(ch)<='z')){
    //         return true;
    //     }

    //     return false;
    // }

    

    bool isPalindrome(string s) {
        int start = 0 , end = s.length()-1;

        while(start<end){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
             if(tolower(s[start]) != tolower(s[end])){
                return false;
            }

            start++;
            end--;

        }
        return true;
        
    }

    int main(){
       string s;
       cout<<"Enter the String: ";
       getline(cin,s);
       int ans = isPalindrome(s);

       if(ans){
        cout<<"The given string is a valid palindrome"<<endl;
       }
       else{
        cout<<"The given string is not palindrome"<<endl;
       }
    }
