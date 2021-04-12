// Name: SHIN ALEKSANDR
// ID: U2010255

#include<iostream>
#include<string>

using namespace std;

class Staff
{
protected:
    string Code;
    string Name;
public:
    void setCode()
    {
        cout << "For Staff" << endl;
        cout << "Input Code: "; cin >> Code;
    }
    void getCode()
    {
        cout << "Code = " << Code << endl;
    }
    void setName()
    {
        cout << "Input Name: "; cin >> Name;
    }
    void getName()
    {
        cout << "Name = " << Name << endl;
    }
};
class Education
{
protected:
    string Highest_professional_qualification;
public:
    void setHigh()
    {
        cout << "\nFor Education" << endl;
        cout << "Input Highest Professional Qualification: "; cin >> Highest_professional_qualification;
    }
    void getHigh()
    {
        cout << "Highest Professional Qualification = " << Highest_professional_qualification << endl;
    }
};

class Teacher : public virtual Staff, public Education
{
protected:
    string Subject;
    string Publication;
public:
    void setSub()
    {
        cout << "\nFor Teacher" << endl;
        cout << "Input Subject: "; cin >> Subject;
    }
    void getSub()
    {
        cout << "Subject = " << Subject << endl;
    }
    void setPub()
    {
        cout << "Input Publication: "; cin >> Publication;
    }
    void getPub()
    {
        cout << "Publication = " << Publication << endl;
    }
};
class Officer :public virtual Staff, public Education
{
protected:
    string Grade;
public:
    void setGra()
    {
        cout << "\nFor Officer" << endl;
        cout << "Input Grade: "; cin >> Grade;
    }
    void getGra()
    {
        cout << "Grade = " << Grade << endl;
    }
};
class Typist :public virtual Staff
{
protected:
    string Speed;
public:
    void setSpe()
    {
        cout << "\nFor Typist" << endl;
        cout << "Input Speed: "; cin >> Speed;
    }
    void getSpe()
    {
        cout << "Speed = " << Speed << endl;
    }
};
class Regular :public virtual Typist
{
protected:
    string Monthly_salary;
public:
    void setMon()
    {
        cout << "\nFor Regular" << endl;
        cout << "Input Monthly Salary: "; cin >> Monthly_salary;
    }
    void getMon()
    {
        cout << "Monthly Salary = " << Monthly_salary << endl;
    }
};
class Casual :public virtual Typist
{
protected:
    string Daily_wages;
public:
    void setDai()
    {
        cout << "\nFor Casual" << endl;
        cout << "Input Daily Wages: "; cin >> Daily_wages;
    }
    void getDai()
    {
        cout << "Daily Wages = " << Daily_wages << endl;
    }
};
class Result : public Teacher, public Officer, public Regular, public Casual, public Education
{
public:
    void Display()
    {
        setCode();
        setName();

        setSub();
        setPub();

        setGra();

        setHigh();

        setSpe();

        setMon();

        setDai();

        system("cls");
        cout << "All result: " << endl;
        getCode();
        getName();
        getSub();
        getPub();
        getGra();
        getHigh();
        getSpe();
        getMon();
        getDai();
    }
};
int main()
{
    Result r;
    r.Display();

    system("pause");
    return 0;
}