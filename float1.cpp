// This program aims to practice defining and initializing floats.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double diameter, radius, circumference, area;

    cout << "Please enter the diameter of your circle: ";
    cin >> diameter;
    radius = diameter / 2;
    circumference = (PI * 2) * radius;
    area = PI * pow(radius, 2.0);
    cout << "The area of your circle is: ";
    cout << area << endl;
    cout << "The circumference of your circle is: ";
    cout << circumference << endl;
    return 0;
}

