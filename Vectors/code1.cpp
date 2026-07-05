//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec; // 0
    // cout << vec[0];

    // vector<int> vec = {1, 2, 3}; // 3
    // cout << vec[0];

    // vector<int> vec(5,0);   // Here the first element '5' is the size of the vector and '0' is the index->value

    // For each loop
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    for (char val : vec)
    {
        cout << val << endl;
    }
    return 0;
}