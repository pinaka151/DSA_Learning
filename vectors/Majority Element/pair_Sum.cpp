#include <iostream>
#include <vector>
using namespace std;

// Brute force method

vector <int> pairSum(vector<int>vect, int target){
    int size = vect.size();
    vector <int> ans;


    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){


            if(vect[i] + vect[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }

        }
    }
    return ans;
}

int main(){

    vector<int>vect = {2,3,4,3,5,4,7,4,1,9};
    int target = 9;

    vector <int> ans = pairSum(vect,target);

    cout<<ans[0]<<" and "<<ans[1]<<" is the pair which meets the target of "<<target<<endl;

    
    return 0;
}


/*
---------------Output-----------------------

0 and 6 is the pair which meets the target of 9

--------------------------------------------
*/