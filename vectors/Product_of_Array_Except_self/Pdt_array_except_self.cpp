#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach
vector <int> pdtArray(vector<int> vect ,int size){
    vector<int> newArray;
    
    for(int i = 0; i<size;i++){
        int ans = 1;
        for(int j = 0; j<size;j++){
            if(j == i){
                continue;
            }else{
                ans = ans*vect[j];
            }
        }
        newArray.push_back(ans);
    }

    return newArray;

}

int  main(){
    vector<int> vect = {1,2,3,4,5};
    int size = vect.size();
    vector<int> ans = pdtArray(vect, size);


    cout<<"The Product of array Except self = [ ";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout<<"]"<<endl;

    
    return 0;
}

/*
---------------Output-----------------------

The Product of array Except self = [ 120 60 40 30 24 ]

--------------------------------------------
*/