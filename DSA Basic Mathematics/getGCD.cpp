#include <iostream>

using namespace std;

int GCD(int n, int m)
{
    // TODONaive method to find the minimum of the two given numbers and then keep dividing until divisible

    // int x = min(n, m);
    // while (x > 0)
    // {
    //     if (n % x == 0 and m % x == 0)
    //         break;
    //     x--;
    // }
    // return x;

    // TODO Euclidian Method to substracting the smaller number from the another until both numbers beco0me equal

    // while (n != m)
    // {
    //     if (n > m)
    //         n = n - m;  
    //     else
    //         m = m - n;
    // }
    // return n;

    // TODO Efficient equlidian Method By rapidly deviding the bigger number by the previous reminder of them

    if (m != 0)
        return n;
    GCD(m, n % m);
}
int main()
{
    int n, m;
    n = 15;
    m = 30;
    cout << GCD(n, m);
}
