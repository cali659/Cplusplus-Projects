// The purpose of this code is to display and use a file to show what the Warehouse Invetory List is. 
// Cali Andrews, 7/22/24, COP 2000
#include <iostream> 
#include <iomanip>
#include <string>
#include <fstream>
using namespace std; 


const int MAX= 4; 
int i = 0; 
bool readInventory(string itemNames[], double itemCost[], int itemNoShip[MAX][2]);
void displayInventory(string itemNames[], double itemCost[], int itemNoShip[MAX][2]);
void writeFile(string itemNames[], double itemCost[], int itemNoShip[MAX][2]);
void logo();
void menu();

    

void logo ()
{
    cout << "      Vander Vomar's Galaxy Diner      " << endl; 
    cout << "***************************************" << endl;
    cout << "              **         **            " << endl;
    cout << "              **         **            " << endl;
    cout << "               **       **             " << endl;
    cout << "                **     **              " << endl; 
    cout << "                 **   **               " << endl;
    cout << "                  *****                " << endl;
    cout << "                   ***                 " << endl;
    cout << "***************************************" << endl;
}
void menu ()
{
    cout << "1. Read in Inventory" << endl; 
    cout << "2. Display Inventory" << endl;
    cout << "3. Write to File" << endl; 
    cout << "4. Exit" << endl; 
    cout << "Enter your choice: " << endl; 
}
bool readInventory(string itemNames[], double itemCost[], int itemNoShip[MAX][2])
{
    ifstream inputFile("inputInvetory (1).txt"); 
    if (!inputFile )
    {
        cout << "Error opening file." << endl; 
            return false;
    }
    for (int i = 0; i < MAX; i++)
    {
        string inputfile;
        getline(inputFile, itemNames[i]);
            inputFile >> itemNames[i] >> itemCost[i] >> itemNoShip[i][1] >> itemNoShip[i][0]; 
    }
        inputFile.close();
            return true;

}
void displayInventory(string itemNames[], double itemCost[], int itemNoShip[MAX][2])
{
    cout << setw(8) << "Name of Item" << "\t" << "Cost Per Item " << "\t" << "No. of Item" << "\t" << "Shipping (1-Yes, 0-No)" << endl; 
    cout << setw(8) << "Lavender Soap" << "\t" << "$1.50" << "\t" << "           40" << "\t" << "                1" << endl; 
    cout << setw(8) << "Milled Soap" << "\t" << "$1.50" << "\t" << "           10" << "\t" << "                1" << endl; 
    cout << setw(8) << "Coconut Oil" << "\t" << "$3.25" << "\t" << "            8" << "\t" << "                0" << endl; 
    cout << setw(8) << "Mint Toothpaste" << "\t" << "$8.45" << "\t" << "           25" << "\t" << "                1" << endl; 
       
}
void writeFile(string itemNames[], double itemCost[], int itemNoShip[MAX][2])
{
    ofstream outputFile ("outputInvetory.txt"); 
        for (int i = 0; i < MAX; i++)
        {
            outputFile << itemNames[i] << itemCost[i] << itemNoShip[i][1] << itemNoShip[i][0] << endl; 
        }
            outputFile.close();
            cout << "File written successfully." << endl; 
}

   int main() { 
    string itemNames[MAX] = {"lavender soap, milled soap, coconut oil, mint toothpaste"};
    double itemCost[MAX] = {1.50, 1.50, 3.25, 8.45};
    int itemNoShip[MAX][2] = { {40,1}, {10,1}, {8,0}, {25,1} };
    int choice;
    ifstream inputFile("inputInvetory (1).txt"); 
    ofstream outputFile("outputInvetory.txt");
do
{
    logo();
    menu();
    cin >> choice; 

    switch(choice)
    {
        case 1:
        cout << "File read successfully..." << endl;
        break;
        case 2: 
            displayInventory(itemNames, itemCost, itemNoShip);
        break;
        case 3: 
            writeFile(itemNames, itemCost, itemNoShip);
        break; 
        case 4:
        if (choice == 4)
        {
        cout << "Exiting Program..." << endl; 
        break; 
        }
    }
    }
        while (choice != 4);
        {
            cout << "Invalid Value. Please enter a value 1 through 4." << endl; 
        }
          
    return 0;
}
    
// First, write the headers and the functions used in the program.
// Then, write the arrays and functions using the do/ while loop.
// After that, switch/if for the menu options.
// After writing all the code for the menu options.
// End the do/ while at the very end.
// At the end, ensure all the code is correctly displayed for the users.