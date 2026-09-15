// This program's purpose is to display a message for the user, such as their name, membership year, access, and status.
// Cali Andrews, 8/5/24, COP2000
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void showAll (string theAccounts[5][7]);
void sortInput (string theAccounts[5][7]);
bool validateUser (string theAccounts[5][7], string username, string password, int &saveRow);
bool readFile(string theAccounts[5][7]);

void showAll (string theAccounts[5][7])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
            {
                cout << setw(15) << theAccounts[i][j] << endl; 
            }
    }
}
void sortInput (string theAccounts[5][7])
{
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (theAccounts[i][2] > theAccounts[j][2])
            {
                for (int k = 0; k < 7; k++)
                {
                    swap(theAccounts[i][k], theAccounts[j][k]);
                }
            }
        }
    }
}
bool validateUser (string theAccounts[5][7], string username, string password, int &saveRow)
{
    for (int i = 0; i < 5; i++)
    {
        if (theAccounts[i][0] == username && theAccounts[i][3] == password)
        {
            saveRow = i; 
            return true; 
        }
    }
    return false; 
} 
bool readFile(string theAccounts[5][7])
{
    ifstream inputFile("AccountData.txt"); 
    if (!inputFile)
    {
        cerr << "Error: File not found" << endl;
        return false; 
    }
        for (int i = 0; i < 5; i++)
    {
         for (int j = 0; j < 7; j++)
            {
                inputFile >> theAccounts[i][j];
            }
    }
    inputFile.close();
    return true;
}

int main()
{
    string accounts[5][7];
    string username; 
    string password; 
    int saveRow;  

    if (!readFile(accounts))
    {
        return 1; 
    }
   
    do 
    {
        cout << "Enter the following Information or Enter Zero to Exit... " << endl; 
        cout << "Please Enter Your User Name > "; 
        cin >> username; 
        if (username == "0")
        {
            cout << "Exiting Program..." << endl; 
        break; 
        }   
        cout << "Please Enter Your User Password > "; 
        cin >> password; 
        if (password == "0")
        {
            cout << "Exiting Program..." << endl;
        break; 
        }

        if (validateUser (accounts, username, password, saveRow))
        {
            string firstName = accounts[saveRow][1];
            string lastName = accounts[saveRow][2];
            string password = accounts[saveRow][3];
            string year = accounts[saveRow][4]; 
            string access = accounts[saveRow][5];
            string status = accounts[saveRow][6];

            if (access == "U")
            {
                cout << "Welcome Back " << firstName << " !" << endl; 
                cout << firstName << " " << lastName << " " << year << " " << access << " " << status << " " << endl;
            }
            else if (access == "A")
            {
                cout << "Welcome Administrator " << firstName << " " << lastName << endl; 
                sortInput(accounts);
                showAll(accounts);
            
             ofstream outputFile("sortedBackup.txt");
                for(int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 7; j++)
                    {
                        outputFile << setw(15) << accounts[i][j];
                    }
                    outputFile << endl; 
                }
                outputFile.close();
                cout << "Backup file completed..." << endl; 
            }
        }     
            else  
            {
                cout << "Username and Password do not match...Please try again..." << endl; 
            }
    }
        while (true);
    return 0; 
}

// First, state the prototype functions.
// Then, the program will display a message or the user will be asked to enter their username or 0 to exit the program.
// If the username or password is incorrect, a message will be displayed saying, "Error, try again."
// The program will display the user's first name, last name, membership year, access, and status.
// If a general user, it will display differently than the Administrator.



