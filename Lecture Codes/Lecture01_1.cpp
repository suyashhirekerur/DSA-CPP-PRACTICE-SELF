#include <iostream>
using namespace std;

int area(double side){
    return side * side;
}

int main()
{
    int n;
    cout << "Enter the side of the square (in centimeters): ";
    cin >> n;

    cout << "Are of square is " << area(n) << endl;
    return 0;
}