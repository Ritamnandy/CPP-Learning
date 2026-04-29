// harmonic series for a
// given value of n: 1+1/2+1/3+……..1/n

#include<iostream>

using namespace std;

int main()
{
    static double total;
    int n = 3;
    for (int i = 1; i <= n;i++)
    {
        total += (1.0 / i);
    }
        cout << total;
    return 0;
}