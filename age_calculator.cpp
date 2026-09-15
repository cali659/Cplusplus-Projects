// The purpose of thsi program is to calculator a person's age. 
// Cali Andrews, 5/27/24, COP 2000. 

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "********************************" << endl;
    cout << "***       Age Calculator     ***" << endl;
    cout << "********************************" << endl;
    cout << "This program will show you the age of\n" ;
    string name;
    int birthYear;
    int curYear = 2024;
    int age;
    cout << "Please enter your full name" << endl;
    getline(cin, name);
    cout << "Please enter your birth year" << endl;
    cin >> birthYear;
    age = curYear - birthYear;
    cout << "Hello " << name << "!" << " You are " << age << " years old" << endl;
}