#include <iostream>
#include <vector>
using namespace std;

int selectionSorting(vector<int> vect, int size)
{ 
   for(int i = 0; i<size-1;i++){
     int smallIndext = i;
     for(int j = i+1; j<size;j++){
         if(vect[j]<vect[smallIndext]){
            smallIndext = j;
         }

     }

     swap(vect[i],vect[smallIndext]);
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

    selectionSorting(vect, size);
}