#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>height,int size){
    int max_area = 0;

    for(int i = 0;i<size;i++){
        int width = 1;
        for(int j = i+1;j<size;j++){
            int length = min(height[i],height[j]);
            int area = length*width;
            max_area = max(max_area,area);
            width++;
        }
    }

    return max_area;
}

// Brute force

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int size = height.size();
    cout<<"The maximum area covered by water in container is = "<<maxArea(height,size)<<endl;
    return 0;
}