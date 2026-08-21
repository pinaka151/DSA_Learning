#include <iostream>
#include <vector>
using namespace std;


// If we know the array is sorted
vector<int> pairSum(vector<int>vect,int target){
    vector <int> ans;

    int size = vect.size();
    int i = 0;
    int j = size-1;
    while(i<j){
    if(vect[i]+vect[j]>target){
        j--;
    }
    else if(vect[i]+vect[j]<target){
        i++;
    }
    else if(vect[i]+vect[j]==target){
        ans.push_back(i);
        ans.push_back(j);
        return ans;
        break;
    }
    }



return ans;
}

int main(){

    vector<int> vect = {2,5,6,7,11,15};

    int target = 9;

    vector <int> ans = pairSum(vect,target);

    cout<<ans[0]<<" and "<<ans[1]<<" is the pair which meets the target of "<<target<<endl;

    return 0;
    }

/*
---------------Output-----------------------

0 and 3 is the pair which meets the target of 9

--------------------------------------------
*/