/*
    This code is written by Javokhir Shomuratov
    U2010257
    Telegram: @shjavohir
    Github: https://github.com/shjavokhir
*/

#include <iostream>
using namespace std;

//Person class
class Person
{
protected:
    int code;
    string name;

public:
    //getter setters
    void setCode(int code)
    {
        this->code = code;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getCode()
    {
        return code;
    }
    string getName()
    {
        return name;
    }
};
//Class Account extending class Person virtually
class Account : virtual protected Person
{
protected:
    float salary;

public:
    
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    float getSalary()
    {
        return salary;
    }
};

class Admin : virtual protected Person
{
protected:
    int experience;

public:
   
    void setExperience(int experience)
    {
        this->experience = experience;
    }
    int getExperience()
    {
        return experience;
    }
};
//Class Master deriving both Account and Admin classes
class Master : protected Account, protected Admin
{
public:
    //default constructor
    Master()
    {
        //whenever new object of class created, this default constructor will be called
        //and this default constructor calls another function to get information
        getInformationFromConsole();
    }
    //function to get information from console
    void getInformationFromConsole()
    {
        cout << "Enter required information: " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Code: ";
        cin >> code;
        cout << "Salary: ";
        cin >> salary;
        cout << "Experience(years): ";
        cin >> experience;
    }
    //function to print information
    void printInformation()
    {
        cout << "Information: " << endl;
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Salary: " << salary << endl;
        cout << "Experience(years): " << experience << endl;
    }
};

int main()
{
    //below line initiates new object of Master class
    //and its constructor called which asks user for information to enter
    Master javokhir;

    system("pause");
    system("cls");

    //showing Master information
    javokhir.printInformation();

    //asks pressing any key to continue then clears screen
    system("pause");
    system("cls");

    //updating information
    cout<<"Updating informatio: "<<endl;
    javokhir.getInformationFromConsole();

    system("pause");
    system("cls");
    
    //exiting main function
    return 0;
}