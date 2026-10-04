#include<iostream>
#include <climits>
using namespace std;

int maxRow(int arr [][3],int row , int col){
    int maxSum = INT_MIN;


    for(int i = 0; i<row;i++){
        int sum = 0;
        for(int j = 0; j<col;j++){
            sum += arr[i][j];
        }
        maxSum = max(maxSum,sum);
    }

    return maxSum;




}

int main(){
    int arr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;
    int col = 3;

    cout<<"maximum row sum in the arr : "<<maxRow(arr,row,col);



}