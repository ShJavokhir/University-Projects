/*
    This code is written by Javokhir Shomuratov
    U2010257
    Telegram: @shjavohir
    Github: https://github.com/shjavokhir
*/

#include <iostream>
using namespace std;

//Base(super) Staff class
class Staff
{
protected:
    int code;
    string name;

public:
    //Default constructor. When child class is initialized then this constructor will be called and get staff information
    Staff()
    {
        cout << "Enter staff information: " << endl;
        cout << "Code: ";
        cin >> code;
        cout << "Name: ";
        cin >> name;
    }
    //prints Staff class information
    void printStaffInfo()
    {
        cout << "[ Staff information ]" << endl;
        cout << " - Code: " << code << endl;
        cout << " - Name: " << name << endl;
    }
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
//Teacher class derives Staff class
class Teacher : public Staff
{
protected:
    string subject;
    int publicationCount;

public:
    //When Teacher class initialized then this constructor will be executed and get information about teacher fields(in our case it gets only subject name)
    Teacher()
    {
        cout << "Subject name: ";
        cin >> subject;
        cout << "Number of publications: ";
        cin >> publicationCount;
    }
    void printTeacherInfo()
    {
        //calling Parent class member function to get Staff information
        printStaffInfo();
        cout << " - Staff type: Teacher" << endl;
        cout << " - Subject name: " << subject << endl;
        cout << " - Number of publications: " << publicationCount << endl;
    }
    void setSubject(string subject)
    {
        this->subject = subject;
    }
    string getSubject()
    {
        return subject;
    }
};

class Officer : public Staff
{
protected:
    string grade;

public:
    Officer()
    {
        cout << "Grade: ";
        cin >> grade;
    }
    void printOfficerInfo()
    {
        printStaffInfo();
        cout << " - Staff type: Officer" << endl;
        cout << " - Grade: " << grade << endl;
    }
    void setGrade(string grade)
    {
        this->grade = grade;
    }
    string getGrade()
    {
        return grade;
    }
};

class Typist : public Staff
{
protected:
    int speed;

public:
    Typist()
    {
        cout << "Speed: ";
        cin >> speed;
    }
    void printTypistInfo()
    {
        cout << " - Speed: " << speed << endl;
    }
    void setSpeed(int speed)
    {
        this->speed = speed;
    }
    int getSpeed()
    {
        return speed;
    }
};

class RegularTypist : public Typist
{
protected:
    double monthlySalary;

public:
    RegularTypist()
    {
        cout << "Monthly salary: ";
        cin >> monthlySalary;
    }
    void printRegularTypistInfo()
    {
        printStaffInfo();
        cout << " - Staff type: Regular typist" << endl;
        printTypistInfo();
        cout << " - Monthly salary: " << monthlySalary << endl;
    }
    void setMonthlySalary(double monthlySalary)
    {
        this->monthlySalary = monthlySalary;
    }
    double getMonthlySalary()
    {
        return monthlySalary;
    }
};

class CasualTypist : public Typist
{
protected:
    double dailyWages;

public:
    CasualTypist()
    {
        cout << "Daily wages: ";
        cin >> dailyWages;
    }
    void printCasualTypistInfo()
    {
        printStaffInfo();
        cout << " - Staff type: Casual typist" << endl;
        printTypistInfo();
        cout << " - Daily wages: " << dailyWages << endl;
    }
    void setDailyWages(double dailyWages)
    {
        this->dailyWages = dailyWages;
    }
    double getDailyWages()
    {
        return dailyWages;
    }
};

//This is our main function to test our program
int main()
{
    //Initializing Teacher class
    //When line below is executed then, firstly constructor of Staff class will be executed, after that Teacher class constructor will be executed
    Teacher kirtiSeth;
    //clears screen
    system("cls");
    //prints Teacher info by calling relevant function
    kirtiSeth.printTeacherInfo();
    //prints "Press any key to continue" message
    system("pause");
    //clears screen
    system("cls");

    //I dont write comment for below lines, because they are similar as Code above

    Officer academicOfficer;
    system("cls");
    academicOfficer.printOfficerInfo();
    system("pause");
    system("cls");

    RegularTypist someRandomTypist;
    system("cls");
    someRandomTypist.printRegularTypistInfo();
    system("pause");
    system("cls");

    CasualTypist randomCasualTypist;
    system("cls");
    randomCasualTypist.printCasualTypistInfo();
    system("pause");

    return 0;
    //Thanks for you attention
}