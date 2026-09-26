#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){
    // char arr[] = {'a','b','c'}; // this doesn't know where to end  so it can  give any number if  we try to  get length
    // char astrrr[] = {'a','b','c','\0'}; // this'\0' tells the compiler that this  array ends here this is null
    // cout<<strlen(arr)<<endl;
    // cout<<strlen(astrrr)<<endl;

    // char str[5];

    // cout<<"Enter the string: ";
    // // cin>>str;

    // cin.getline(str,5);  
    // // cin.getline(str,100,',');  //cin.geline(string,length,delimiter)  here  delimiter means we say what to consider as endline for ex default enter is considered as break of line but using delim we can specify an particular symbol such as .

    // for(char val: str){
    //     cout<<val<<" ";

    // }
    // cout<<endl;
    // // cout<<"Output = " <<str<<endl;


    // strings

    // string str;

    // cout<<"Enter the string: ";
    // // cin>>str;// this too give the string before the space
    // getline(cin,str);
    // cout<<"Output = " <<str<<endl;   


    string str = "vipin";

    reverse(str.begin(),str.end());
    cout<<str<<endl;


    return 0;
}


/*----------------------Output----------------------------------------

Enter the string: punjab national bank
Output = punjab

Enter the string: punjab national bank
Output = punjab national bank


// Strings

Enter the string: union bank
Output = union


Enter the string: union bank
Output = union bank






----------------------------------------------------------------------
*/