#include <iostream>
#include <vector>
using namespace std;

int insertionSort(vector<int> vect, int size)
{ 
   for(int i = 1;i<size;i++){
    int curr = vect[i];
    int prev = i-1;
    while(prev>=0 && vect[prev]>curr){
        vect[prev+1] = vect[prev];
        prev-- ;

    }

    vect[prev+1] = curr;


   }

    for (int i = 0; i < size; i++)
    {
        cout << " ";
        cout << vect[i];
    }
}

int main()
{
    vector<int> vect = {43, 11, 25, 12, 63};
    int size = vect.size();

    insertionSort(vect, size);
}