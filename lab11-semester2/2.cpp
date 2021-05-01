/*
    This code is written by Javokhir Shomuratov
    U2010257
    Started at; 21:19 22-april 2021
    Finished at: 12:09 23-april 2021
    Telegram: @shjavohir
    Github: https://github.com/shjavokhir
*/

#include <iostream>
#include <fstream>
using namespace std;

//defining Person class
class Person
{
private:
    string name, telNumber;

public:
    void setData(string name, string telNumber)
    {
        this->name = name;
        this->telNumber = telNumber;
    }
    void printData()
    {
        cout << "Name: " << name << " TelNumber: " << telNumber << endl;
    }
    string getName()
    {
        return name;
    }
    string getTelNumber()
    {
        return telNumber;
    }
};
Person person;

void getTelNumberByName()
{
    //object of ofstream class
    ifstream ifs;
    //opening file for reading in binary mode
    ifs.open("data", ios::binary);
    //clearing screen
    system("cls");
    string name;
    cout << "Enter name to get corresponding tel number: ";
    cin >> name;
    //looping through contents of the file
    while (ifs.read((char *)&person, sizeof(Person)))
    {
        if (person.getName() == name)
        {
            cout << person.getTelNumber() << " is the tel number you want" << endl;
            ifs.close();
            return;
        }
    }
    //cloing file
    ifs.close();
    cout << "Name not found;" << endl;
}

void getNameByTelNumber()
{
    ifstream ifs;
    ifs.open("data", ios::binary);
    system("cls");
    string telNumber;
    cout << "Enter tel number to get corresponding name: ";
    cin >> telNumber;
    while (ifs.read((char *)&person, sizeof(Person)))
    {
        if (person.getTelNumber() == telNumber)
        {
            cout << person.getName() << " is the name you want" << endl;
            ifs.close();
            return;
        }
    }
    ifs.close();
    cout << "Tel number not found" << endl;
}

void deleteRecordByTelNumber()
{

    ifstream ifs;
    ofstream ofs;
    ofstream tempOfs;
    system("cls");
    tempOfs.open("temp", ios::binary);
    ofs.open("data", ios::binary | ios::app);
    ifs.open("data", ios::binary);

    string telNumber;
    bool isFound = false;
    cout << "Enter tel number of the record you want to delete: ";
    cin >> telNumber;

    while (ifs.read((char *)&person, sizeof(Person)))
    {
        if (person.getTelNumber() != telNumber)
        {
            tempOfs.write((char *)&person, sizeof(Person));
        }
        else
        {
            isFound = true;
        }
    }

    //deleting file named data
    remove("data");
    //renaming file named temp into data
    rename("temp", "data");
    if (isFound)
    {
        cout << "Record with tel number of " << telNumber << " is deleted" << endl;
    }
    ifs.close();
    ofs.close();
    tempOfs.close();
}

void addRecord()
{
    ofstream ofs;
    ofs.open("data", ios::binary | ios::in | ios::out);
    system("cls");
    int positionToAdd;
    string name, telNumber;
    cout << "Enter the position to add new record: ";
    cin >> positionToAdd;
    cout << "Name: ";
    cin >> name;
    cout << "Tel number: ";
    cin >> telNumber;
    person.setData(name, telNumber);
    //getting position to replace file content
    int realPositionToAdd = sizeof(Person) * (positionToAdd - 1);
    //moving bytes from beginning
    ofs.seekp(realPositionToAdd);
    //writing to the file
    ofs.write((char *)&person, sizeof(Person));
    ofs.close();
}

void showFileContents()
{
    ifstream ifs;
    ifs.open("data", ios::binary);

    system("cls");
    cout << "Below is the data inside the file: " << endl;
    //reading all the content of the binary file
    while (ifs.read((char *)&person, sizeof(Person)))
    {
        person.printData();
    }
    ifs.close();
}

void showMenu()
{
    int usersChoice;
    while (true)
    {
        cout << "<=== MENU ===>" << endl;
        cout << "1) Get tel number by name" << endl;
        cout << "2) Get name by tel number" << endl;
        cout << "3) Delete record by tel number" << endl;
        cout << "4) Add record to the specific location" << endl;
        cout << "5) Print file contents" << endl;
        cout << "6) Exit" << endl
             << endl;
        cout << "Your choice: ";
        cin >> usersChoice;
        switch (usersChoice)
        {
        case 1:
            getTelNumberByName();
            break;
        case 2:
            getNameByTelNumber();
            break;
        case 3:
            deleteRecordByTelNumber();
            break;
        case 4:
            addRecord();
            break;
        case 5:
            showFileContents();
            break;
        default:
            exit(0);
        }
        system("pause");
    }
}

//clean main function
int main()
{
    showMenu();
    return 0;
}