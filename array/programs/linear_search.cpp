#include <iostream>
using namespace std;

int main(){
    int flag = 0;
    int index;
    int arr[] = {20,32,4,53,6,765,43,4,70};
    int target;
    cout<<"Enter the number: ";
    cin>>target;

    int size =  sizeof(arr)/ sizeof(int);

    for(int i = 0; i<size;i++){
        if(arr[i] == target){
            flag = 1;
            index = i;
            break;
        }
    }
       if(flag){
        cout<<"Yes "<<target<<" is present in the given array at index "<<index<<endl;
        }else{
        cout<<"couldn't found "<<target<<" in the array";
        }

      



    return 0;
}

/*
---------------------Output---------------------------------------

Enter the number: 765
Yes 765 is present in the given array at index 5

------------------------------------------------------------------
*/