#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;


    // For the characters where i tried different approach
    int n;
    cout<<"Enter the number(for characters to print): ";
    cin>>n;


    // To print Numbers 
    // for(int i = 1;i<=num;i++){
    //     for(int j = 1; j<=num;j++){
    //         cout<<j<<" ";

    //     }
    //     cout<<endl;
    // }

    // Print Different Numbers not repititive
     int numbers = 1;
     for(int i = 1;i<=num;i++){
        for(int j = 1; j<=num;j++){
            
            cout<<numbers<<" ";
            numbers++;

        }
        cout<<endl;
    }

      
    cout<<endl;

    //  To print star pattern
    // for(int i = 1;i<=num;i++){
    //     for(int j = 1; j<=num;j++){
    //         cout<<"*"<<" ";

    //     }
    //     cout<<endl;
    // }

    // cout<<endl;




    
    // For characters
    
    //  My approach
    //   for(int i = n;i<=n+3;i++){
    //     char ch;
    //     for(int j = n; j<=n+3;j++){
    //         ch = j;
    //         cout<<ch<<" ";

    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

     // Shradha khapra maam's aproach

//      for(int i = 1;i<=num;i++){
//         char ch = 'A';
//         for(int j = 1; j<=num;j++){
            
//             cout<<ch<<" ";
//             ch = ch + 1;

//         }
//         cout<<endl;
//     }

// cout<<endl;

// For None repititive characters

     char ch = 'A';
     for(int i = 1;i<=num;i++){
        
        for(int j = 1; j<=num;j++){
            
            cout<<ch<<" ";
            ch = ch + 1;

        }
        cout<<endl;
    }

}





/*
--------------------Output-------------------------------------
Enter the number: 4
Enter the number(for characters to print): 65
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 

1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16  


* * * * 
* * * * 
* * * * 
* * * * 

A B C D 
A B C D 
A B C D 
A B C D 

A B C D 
A B C D 
A B C D 
A B C D 

A B C D 
E F G H 
I J K L 
M N O P

*/