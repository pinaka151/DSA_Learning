#include<iostream>
using namespace std;

int main(){
  int arr[6][6] = {
    { 1,  2,  3,  4,  5,  6},
    { 7,  8,  9, 10, 11, 12},
    {13, 14, 15, 16, 17, 18},
    {19, 20, 21, 22, 23, 24},
    {25, 26, 27, 28, 29, 30},
    {31, 32, 33, 34, 35, 36}
};
    int row = 6;
    int col = 6;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i<row;i++){
        for(int j = 0; j<col;j++){
            if(i == j){
                sum1+=arr[i][j];
            }
        }
    } 

    int i = 0;
    int j = col-1;
    while( i<row && j>=0){
        if(i != j){
           sum2+=arr[i][j];
        }

        i++;
        j--;
    }

    
      int sum = sum1 + sum2;



     cout<<"sum of diagonal elements of arr : "<<sum<<endl;



    
}
