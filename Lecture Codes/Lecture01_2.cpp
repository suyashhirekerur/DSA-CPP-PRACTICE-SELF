#include <iostream>
using namespace std;

int lessThan(int a, int b) {
    if (a > b)
    {
        return a;
    }
    else {
        return b;
    }
    
}

int main()
{
    int n1, n2;
    cout << "Enter two numbers to know which number is greater: ";
    cin >> n1 >> n2;

    cout << lessThan(n1, n2);
    return 0;
}