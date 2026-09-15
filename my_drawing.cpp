// The purpose of this prgram is draw a rectangle as many times as you want.  
// Cali Andrews, 06/24/24, COP 2000.
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    const double MIN_NUM = 1;
    const double MAX_NUM = 20;
    const double EXIT_CODE = 99;
    double length;
    double width;
    
do 
{
    cout << "         Welcome to Rectangle Draw It!!" << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << "Enter a value from 1 to 20..." << endl;
    cout << "Please enter the length of the rectangle (Enter 99 to Exit) > ";
    cin >> length;
    if (length == EXIT_CODE)
        break;
    while (length < MIN_NUM || length > MAX_NUM)
    {
    cout << "Error. Please enter a valid value." << endl;
    cin >> length;
    }
    cout << "Please enter the width of the rectangle (Enter 99 to Exit) > ";
    cin >> width;
    if (width == EXIT_CODE)
        break;
    while (width < MIN_NUM || width > MAX_NUM)
    {
    cout << "Error. Please enter a valid value." << endl;
    cin >> width;
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << endl; 
    }
}
    while (length != EXIT_CODE && width != EXIT_CODE);
    cout << "Have a good day!" << endl; 

return 0;
}

// First, write all the variables and constants needed for the program. 
// Then write “Welcome to Rectangle Draw It!! ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^, Enter a value from 1 to 20… Please enter the length of 
// the rectangle.” Once done, the program should display that message to the user. Once displayed, the user should input the size they 
// want for the rectangle from 1 to 20 and then be able to choose the width they wish from 1 to 20. Also, the number 99 is given to exit 
// the program. If any other numbers are given besides those, the program will say Error. Please enter a valid value. The user inputs the 
// numbers they want, and then the program displays the rectangle the user wants. If the user inputs 99, the program will end and display 
// “Have a good day!” Inside the program, it is programmed to take specific numbers and to be able to display a rectangle for the user. 
// The program uses do/while loops, if statements, and for loops. 

