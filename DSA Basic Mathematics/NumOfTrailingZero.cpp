
#include <iostream>

using namespace std;

int trailingZero(int n)
{
    // The naive method is to find it's factorial and then count the number of zeros by deviding by 10. If it's devisible by 10 incriment it's count by 1 and you get the number of zeros

    // EFFICIENT METHOD

    // TODO We just have to count the pair of fives and twos in the prime factorization of that number.

    int res = 0;

    for (int i = 5; i <= n; i *= 5)
    {
        res += n / i;
    }
    return res;
}

int main()
{
    int n = 251;
    cout << trailingZero(n) << endl;
}