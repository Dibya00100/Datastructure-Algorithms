#include <iostream>
#include "function.h"

using namespace std;

void divisors(int n)
{
    int i = 1;
    // for (int i = 1; i * i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << endl;
    //         if (i != (n / i))
    //             cout << n / i << endl;
    //     }
    // }

    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << n / i << endl;
    }
}

int main()
{
    int n = 45;
    divisors(n);
    cout << n << " IS prime " << isPrime(n) << endl;
}