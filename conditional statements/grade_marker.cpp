#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks>=90){
        cout<<"A grade"<<endl;
    }else if(marks>=80 && marks<90){

        cout<<"B grade"<<endl;

    }else if(marks<80 ){

        cout<<"c grade"<<endl;

    }    


    
}