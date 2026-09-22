#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int> vect ,int n, int cow, int mid){

    int cowsPlaced = 1 ,  lastPosition = vect[0];

    for(int i = 0; i<n;i++){
        if(vect[i]-lastPosition >=mid){
            cowsPlaced++;
            lastPosition = vect[i];
        }
        if(cowsPlaced == cow ){
            return true;
        }
    }

return false;


}

int aggressiveCow(vector<int> vect ,int n, int cow){
    sort(vect.begin(),vect.end());
    int start = 1;
    int  end  = vect[n-1]-vect[0];

    int  ans = 0;
    while(start<=end){
        int  mid = start + (end-start)/2;
        if(isValid(vect, n , cow ,mid)){
            ans = mid;
            start = mid +1;

        }
        else{
            end = mid -1;
        }

    }

    return ans;


}

int main(){
    vector <int> vect = {1,2,8,4,9};
    int n = 5;
    int cow = 3;
    cout<<aggressiveCow(vect,n,cow)<<endl;
}
