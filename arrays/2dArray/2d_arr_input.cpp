#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the rows: ";
    cin>>n;

    int m;
    cout<<"Enter the columns: ";
    cin>>m;    

    int arr[n][m];

    // Loops in 2D Array to take input
    cout<<"Write the arrays elements"<<endl;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Elements of The Array"<<endl;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}




/*
------------------------------------OUTPUT-----------------------------------------
Enter the rows: 3
Enter the columns: 4
Write the arrays elements

12
42
23
42

43
6
8
3

232
32
53
6

Elements of The Array
12 42 23 42 
43 6 8 3 
232 32 53 6
-----------------------------------------------------------------------------------
*/



