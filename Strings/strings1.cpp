#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);
    // cin.getline(str, 100, '.');     // using delimiter

    for (char ch : str)
    {
        cout << ch << " ";
    }

    cout << "output: " << str << endl;
    return 0;
}