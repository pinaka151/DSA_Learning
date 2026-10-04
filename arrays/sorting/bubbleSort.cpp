#include <iostream>
#include <vector>
using namespace std;

int bubbleSorting(vector<int> vect, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool isswap = false;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (vect[j] > vect[j + 1])
            {
                swap(vect[j], vect[j + 1]);
                isswap = true;
            }
        }
        if (!isswap)
        {
            return;
        }
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

    bubbleSorting(vect, size);
}