// Calculate binomial coefficient nCr
// Formula = (n !/ ((n - r) !*r !))

#include <iostream>
using namespace std;

int factN(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factN(n);
    int fact_r = factN(r);
    int fact_nmr = factN(n - r);

    int binC = (fact_n / (fact_nmr * fact_r));

    return binC;
}

int main()
{
    int n, r;

    cout << "Enter the values of n and r to fidn the binomial coefficient: ";
    cin >> n >> r;

    cout << "Binomial Coefficient = " << nCr(n, r) << endl;

    return 0;
}