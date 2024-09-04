#include "function.h"
#include <iostream>

using namespace std;

void primeFactors(int n)
{
    // if (n <= 1)
    //     return;
    // for (int i = 2; i * i <= n; i++)
    // {
    //     while (n % i == 0)
    //     {
    //         cout << i;
    //         n /= i;
    //     }
    // }
    // if (n > 1)
    //     cout << n;

    // TODO More efficient solution by adding divisibility by 2 and 3 and explixitly checking for those 2 factors

    if (n <= 1)
        return;
    while (n % 2 == 0)
    {
        cout << 2;
        n /= 2;
    }
    while (n % 3 == 0)
    {
        cout << 3;
        n /= 3;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i;
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            cout << (i + 2);
            n /= (i + 2);
        }
    }
    if (n > 3)
        cout << n;
}
int main()
{
    primeFactors(625);
}