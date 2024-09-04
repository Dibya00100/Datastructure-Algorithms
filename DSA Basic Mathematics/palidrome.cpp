// Determinig a number is palidrome number

#include <iostream>

using namespace std;

bool palindrome(int n)
{
    int temp = n;
    int res = 0;
    while (n > 0)
    {
        res = res * 10 + (n % 10);
        n /= 10;
    }
    return (res == temp);
}

int main()
{
    int n = 1222231;
    bool x = palindrome(n);
    cout << x << endl;
    return 0;
}