#include<iostream>
using namespace std;

int main(){
    int arr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;
    int col = 3;

    int target;
    cout<<"Enter the target value: ";
    cin>>target;

    int flag = false;

    for(int i = 0; i<row;i++){
        for(int j = 0; j<col;j++){
            if(arr[i][j] == target){
                flag = true;
                break;
            }
        }
    }

    if(flag){
        cout<<"Got the Targeted Value"<<endl;
    }else{
        cout<<"Targeted Value is Not present"<<endl;
    }
}
