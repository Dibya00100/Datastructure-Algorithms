#include <iostream>

using namespace std;

// Normal method

// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }

// Recursive Method
int recfact(int n)
{
    if (n == 0)
        return 1;
    return n * recfact(n - 1);
}
int main()
{
    int n = 6;
    // cout << factorial(n);
    cout << recfact(n);
}