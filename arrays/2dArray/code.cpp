#include<iostream>
using namespace std;

int main(){
    int arr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;
    int col = 3;
    // // To access 8 we have to give the indexing as 2 index for row and 1 indexing for colm
    // cout<<arr[2][1]<<endl;
    // // To replace or insert
    // arr[2][1] = 44;
    // cout<<arr[2][1]<<endl;


    // Loops in 2D Array
    for(int i = 0; i<row;i++){
        for(int j = 0; j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}





