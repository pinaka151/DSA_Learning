#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int flag = 0;

    //  By For loop


    // for(int i = 2;i<=num-1;i++){
    //     if(num%i==0){
            
    //         flag += 1;
    //         break;
    //     }
    // }


    // By While Loop
//   int i = 2;
//     while(i>=2 && i<=num-1){
//         if(num%i==0){
            
//             flag += 1;
//             break;
//         }
//         i++;

//     }


    // Optimisation as we don't need to  check every fators to confirm wheter a number  is prime or not we can simply do i*i<=n

   //  By For loop


    // for(int i = 2;i*i<=num;i++){
    //     if(num%i==0){
            
    //         flag += 1;
    //         break;
    //     }
    // }


    // By While Loop
       int i = 2;
      while(i*i<=num){
         if(num%i==0){
            
            flag += 1;
            break;
         }
         i++;

     }

    if(flag !=0){
        cout<<num<<" is not a prime number"<<endl;
    }else{
        cout<<num<<" is a prime number"<<endl;
    }
}