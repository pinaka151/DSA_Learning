#include <iostream>
using namespace std;

int main(){
    // int marks[5] = {99,78,65,45,90};
    // cout<<marks[0]<<endl;


    // if we didn't know the size/length of array
    // int length = sizeof(marks)/sizeof(int);// we have divided sizeof(marks) by sizeof(int) as szofmarks will give total size occupied by array one place carry into 4 size 
    
    // for(int i = 0; i<length;i++){
    //     cout<<marks[i]<<endl;
    // }



    // Another Array

    int roll_no[5];
    int len_roll = sizeof(roll_no)/sizeof(int);

    for(int i = 0;i<len_roll;i++){
        cin>>roll_no[i];
    }


    for(int i = 0;i<len_roll;i++){
        cout<<roll_no[i]<<" ";
    }

}