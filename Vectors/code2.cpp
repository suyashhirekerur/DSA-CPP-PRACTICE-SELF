// Vector Functions

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    // cout << "size = " << vec.size() << endl; // Displays the size of the vector

    vector<int> vec;
    cout << "size = " << vec.size() << endl;
    vec.push_back(25); // Adds the element in the vector
    vec.push_back(35);
    vec.push_back(45);
    cout << "after push back size = " << vec.size() << endl;

    vec.pop_back(); // Deletes the utmost last element from the vector, 45 will get deleted

    for (char val : vec) // for each loop
    {
        cout << val << endl;
    }

    return 0;
}