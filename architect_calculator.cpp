// The purpose of the program is to calculate the area of a rectangle, triangle, and circle. 
// Cali Andrews, 6/10/24, COP 2000
#include <iostream> 
#include <iomanip>
using namespace std; 

int main()
{
    int num;
    double length;
    double width;
    double height;
    double base;
    double radius;
    const double pi = 3.14159265358979323846;
    double area_rectangle = length * width;
    double area_triangle = (height * base)/2;
    double area_circle = pi * pow(radius, 2);
    

    cout << setprecision(2) << fixed << showpoint;

    cout << "Architect Area Calculator: " << endl;
    cout << "************************ " << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Circle" << endl;
    cout << "4. Quit" << endl;
    cout << "Please enter a menu item (1-4) > ";
    cin >> num; 
    if (num == 1)
    {
        cout << "Rectangle" << endl;
        cout << "Pleater enter the lenght > ";
        cin >> length;
        cout << "Please enter the width > "; 
        cin >> width;
        area_rectangle = length * width;
        cout << "Area = " << area_rectangle << " sq/ft " << endl;
    }
    else if (num == 2)
    {
        cout << "Triangle" << endl;
        cout << "Please enter the height > ";
        cin >> height;
        cout << "Please enter the base > ";
        cin >> base;
        area_triangle = (height * base)/2;
        cout << "Area = " << area_triangle << " sq/ft " << endl;
    }
    else if (num == 3)
    {
        cout << "Circle" << endl;
        cout << "Please enter the radius > ";
        cin >> radius;
        area_circle = pi * pow(radius, 2);
        cout << "Area = " << area_circle << " sq/ft " << endl;
    }
    else if (num == 4)
    {
        cout << "Thank you for using Architect Area Calculator!" << endl;
    }
    else 
        cout << "Invalid value" << endl;
    return 0;
}
