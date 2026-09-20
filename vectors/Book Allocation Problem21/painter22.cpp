#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector <int> &arr, int n, int  m, int maxAllowedTime){
    int painter = 1, time = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>maxAllowedTime){
            return false;
        }
        else if(time + arr[i]<=maxAllowedTime){
            time+=arr[i];

        }
        else{
            painter++;
            time = arr[i];
        }
    }
    return painter > m ? false:true;
}

int minTimeToPaint(vector<int> &arr, int n, int m){

    if(m>n){
        return -1;
    }
    int  sum = 0;
    int size= arr.size();
    int min_start = 0;
    for(int  i = 0; i<size;i++){
        sum+=arr[i];
        if(arr[i]>min_start){
            min_start = arr[i];
        }
    }

    int str = min_start;
    int end = sum;
    int ans = -1;
    while(str<=end){
        int  mid = str + (end-str)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            str = mid+1;
        }
    }


return ans;
}


int main(){
    vector<int> vect = {22,21,23,24};
    int n = 4;
    int m = 2;

    cout<<minTimeToPaint(vect,n,m)<<endl;
    
}
