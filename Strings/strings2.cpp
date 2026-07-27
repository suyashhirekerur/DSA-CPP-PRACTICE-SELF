#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // char str[] = "Suyash Hirekerur";
    // int len = 0;
    // for (int i = 0; i < str[i]; i++)
    // {
    //     len++;
    // }
    // cout << "Length of string is: " << len << endl;

    // string str;
    // getline(cin, str);
    // cout << "output: " << str << endl;

    // string str = "apna college";
    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout << str[i] << endl;
    // }

    // string str = "apna college";
    // for (char ch : str)
    // {
    //     cout << ch << " ";
    // }
    // cout << endl;

    // reverse a string
    string str = "apna college";
    reverse(str.begin(), str.end());    //iterators
    cout << str << endl;
    return 0;
}