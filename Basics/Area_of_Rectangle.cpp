// Write a program to find the area of a rectangle.
#include <iostream>
using namespace std;

int main()
{

    int length;
    int breadth;
    cout << "Enter the Length of the rectangle: " << endl;
    cin >> length;
    cout << "Enter the Breadth of the rectangle: " << endl;
    cin >> breadth;
    int area;
    area = length * breadth;
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}