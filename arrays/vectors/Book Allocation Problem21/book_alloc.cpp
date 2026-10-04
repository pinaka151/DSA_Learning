#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector <int> &arr, int n, int  m, int maxAllowedPage){
    int students = 1, pages = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>maxAllowedPage){
            return false;
        }
        else if(pages + arr[i]<=maxAllowedPage){
            pages+=arr[i];

        }
        else{
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false:true;
}

int allocateBooks(vector<int> &arr, int n, int m){

    if(m>n){
        return -1;
    }
    int  sum = 0;
    int size= arr.size();
    for(int  i = 0; i<size;i++){
        sum+=arr[i];
    }

    int str = 0;
    int end = sum;
    int ans = -1;
    while(str<=end){
        int  mid = str + (end-str)/2;
        if(isValid(arr,n,m,mid)){
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

    cout<<allocateBooks(vect,n,m)<<endl;
    
}
