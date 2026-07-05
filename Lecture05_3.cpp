// Calculate the factorial of a number using functions

#include <iostream>
using namespace std;

int factN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int fun(){
    return 22; //control
}

int main()
{
    // cout << factN(5);
    // return 0;

    fun();
}
