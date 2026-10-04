#include<iostream>
using namespace std;

int main(){  

    pair<int,int> p = {1,2};

    cout<<p.first<<endl;
    // cout<<p.second<<endl;

    pair<string, int> anp = {"vipin",23};
    cout<<anp.first<<endl;


    // pair of pair

    pair<int, pair<int,int>> pp = {23,{02,23}};
    cout<<pp.first<<endl;
    cout<<pp.second.first<<endl;


    
}