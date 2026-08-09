#include <iostream>
using namespace std;

int main(){
     int num;
     cout<<"Enter the number: ";
     cin>>num;

     for (int i = 1; i<=num;i++){
        for(int j = 1; j<=i;j++){
            cout<<"*";
       
     }
     cout<<endl;
}

//   For numbers

 for(int i = 1; i<= num;i++){
    for (int j = 1; j<= i;j++){
        cout<<i;

    }
    cout<<endl;   
 }


// 2nd pattern

 for(int i = 1; i<= num;i++){
    for (int j = 1; j<= i;j++){
        cout<<j;

    }
    cout<<endl;   
 }

//  3rd pattern


 for(int i = 1; i<= num;i++){
    for (int j = i; j>0;j--){
        cout<<j;

    }
    cout<<endl;   
 }


// 4th pattern (Floyd's Triangle)
int n = 0;
for (int i = 1; i<=num;i++){
    for(int j = 1;j<=i;j++){
        n = n + 1;
        cout<<n<<" ";

    }
    cout<<endl;
}



// 5th pattern (inverted triangle)
int  a = 1;
for (int i = num; i>0;i--){

    cout<<string(num - i, ' ');
    for(int j=i;j>0;j--){
        
        cout<<a;

    }
    n++;
    
    cout<<endl;
}





//  For characters

char ch = 'A';
for(int i = 1; i<= num;i++){
    for (int j = 1; j<= i;j++){
        cout<<ch;
    }
    ch = ch + 1;
    cout<<endl;   
 }

return 0;
}


/*
---------------------Output---------------------------------------
Enter the number: 4
*
**
***
****
1
22
333
4444
1
12
123
1234
1
21
321
4321
1 
2 3 
4 5 6 
7 8 9 10 
1111
 111
  11
   1
A
BB
CCC
DDDD



------------------------------------------------------------------
*/