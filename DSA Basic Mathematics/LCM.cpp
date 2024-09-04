#include <iostream>

using namespace std;

int GCD(int n, int m)
{
    if (m == 0)
        return n;

    return GCD(m, n % m);
}
int LCM(int n, int m)
{
    return (n * m) / GCD(n, m);
}

int main()
{
    int n, m;
    n = 4;
    m = 6;
    cout << LCM(n, m);
}