// Count the digit of a number

#include <iostream>

using namespace std;

int countDigit(int n)
{
    int res = 0;
    while (n > 0)
    {
        n /= 10;
        res++;
    }
    return res;
}
int main()
{
    int n = 126123;
    int x = countDigit(n);
    cout << x << endl;
}