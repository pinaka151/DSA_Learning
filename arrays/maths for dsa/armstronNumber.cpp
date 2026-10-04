#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num)
{
    int temp = num;
    int check = 0;
    int rem = 0;

    while (temp != 0)
    {
        rem = temp % 10;
        check += (rem * rem * rem);

        temp /= 10;
    }

    return check == num;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (isArmstrong(num))
    {
        cout << "The given number is an armstrong number" << endl;
    }
    else
    {
        cout << "Not an armstrong number" << endl;
    }
}