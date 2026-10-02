#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int flag = 0;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not a Prime Number" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime Number" << endl;
    }
}


/*----------------------Output----------------------------------------

Enter the number: 12
Not a Prime Number

Enter the number: 19
Prime Number

----------------------------------------------------------------------
*/