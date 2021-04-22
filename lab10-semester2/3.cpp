/*
    This code is written by Javokhir Shomuratov
    U2010257
    Finished at: 12:39 22-april 2021
    Telegram: @shjavohir
    Github: https://github.com/shjavokhir
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //creating instance of class input file stream
    ifstream stream("numbers.txt");

    //we define usersNumber variable as string so it will be easy to compare it with string lines in file
    string usersNumber;
    cout << "Please enter a number to search from file: ";
    cin >> usersNumber;

    string line = "";
    while (getline(stream, line))
    {
        if (line == usersNumber)
        {
            //once file contains users number we can close program using "return 0"
            cout << "File contains your number";
            system("pause");
            stream.close();
            return 0;
        }
    }
    //this is the case where file does not contain users number
    cout << "File doesn't contain your number !";

    //closing stream
    stream.close();

    return 0;
}