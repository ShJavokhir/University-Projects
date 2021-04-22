/*
    This code is written by Javokhir Shomuratov
    U2010257
    Finished at: 12:08 22-april 2021
    Telegram: @shjavohir
    Github: https://github.com/shjavokhir
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //creating output file stream class instance for one.txt
    ofstream stream1("one.txt");
    //writing first 10 even numbers into one.txt
    for (int i = 1; i <= 10; i++)
    {
        stream1 << i * 2 << endl;
    }
    //closing output file stream class instance of one.txt
    stream1.close();

    //creating output file stream class instance for two.txt
    ofstream stream2("two.txt");
    for (int i = 1; i <= 10; i++)
    {
        stream2 << i * 5 << endl;
    }
    //closing output file stream class instance of two.txt
    stream2.close();

    //defining a variable that holds sum of the numbers from one.txt and two.txt
    int total = 0;
    string line;

    ifstream stream3("one.txt");
    while (getline(stream3, line))
    {
        //stoi function below converts string to int, this function may not be work on older versions of c++ compiler
        total += stoi(line);
    }
    //closing input file stream class instance of one.txt
    stream3.close();

    ifstream stream4("two.txt");
    while (getline(stream4, line))
    {
        //stoi function below converts string to int, this function may not be work on older versions of c++ compiler
        total += stoi(line);
    }
    //closing input file stream class instance of two.txt
    stream4.close();

    //creating output file stream class instance for total.txt
    ofstream stream5("total.txt");
    //writing value of our variable total into total.txt file
    stream5 << total;
    //closing output file stream class intance of total.txt
    stream5.close();

    return 0;
}