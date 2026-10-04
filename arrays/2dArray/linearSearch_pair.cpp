#include<iostream>
using namespace std;

pair<int, int> isTarget(int arr[][3],int row , int col, int target){
   

    for(int i = 0; i<row;i++){
        for(int j = 0; j<col;j++){
            if(arr[i][j] == target){
                return {i, j};
                break;
            }
        }
    }


    return {-1,-1};



}

int main(){
    int arr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;
    int col = 3;

    int target;
    cout<<"Enter the target value: ";
    cin>>target;

    pair<int, int> ans = isTarget(arr, row, col, target);

    cout << "Row: " << ans.first << endl;
    cout << "Column: " << ans.second << endl;

    
}
