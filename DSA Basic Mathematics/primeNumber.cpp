#include <iostream>

using namespace std;

// An optimized solution
// bool isPrime(int n)
// {
//     if (n == 1)
//         return false;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
// A super optimized solution

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    // int n = 643456677;
    for (int i = 1; i <= 100; i++)
        cout << i << " is a prime: " << isPrime(i) << endl;
}
