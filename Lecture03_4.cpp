#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter your character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase\n";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase";
    }

    return 0;
}