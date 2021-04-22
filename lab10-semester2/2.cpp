/*
    This code is written by Javokhir Shomuratov
    U2010257
    Finished at: 12:29 22-april 2021
    Telegram: @shjavohir
    Github: https://github.com/shjavokhir
*/

/*
    NOTE
    I did not understand the problem properly. Teacher said that: "Read the content of file 
    telephone_numbers.txt then print its content as column and row format.  
    There are two ways: 
    First way is reading every line of file content and printing as just it looks like
    Second way is parsing every line (remember we have two fields at every line (name telephone_number)) into two variables 
    like "string name" and "int telephone_number". This way is more complicated and I think we did not learn this way yet
    We can learn second way from google and do but I want to go through into first way
    Sorry if I have some mistakes
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //creating instance of input file stream class for telephone_numbers.txt
    ifstream stream1("telephone_numbers.txt");
    //variable for reading every single line of telephone_numbers.txt
    string line = "";

    //printing file content into console
    while (getline(stream1, line))
    {
        cout << line << endl;
    }

    return 0;
}