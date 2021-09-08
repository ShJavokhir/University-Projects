/***
Name: MEKHROL BAZAROV
ID: U2010046   Section: 003
Program Statement: ***/

// FINAL EXAM - OBJECT ORIENTED PROGRAMMING 2

#include <iostream> // header file of the program
#include <fstream>
// change there if there is int main1()
using namespace std;
class NAVRUZ  // creating a class of NAVRUZ IT is an event
{
private:
        static int Numberof_attendance; // I write Numberof_attendance not to similar to others
        static double Totalmoney; 
public:
    NAVRUZ()
    {
        Numberof_attendance = 0; // I intialized here to 0 both values
        Totalmoney = 0;
        
    }
    void noPass()
    {
        Numberof_attendance++; 
        Totalmoney += 20000;
    }
    void withPass()
    {
        Numberof_attendance++;
    }
    void Display()
    {
        cout << "Number of attendeest" << Numberof_attendance << endl;
        cout << "Total money" << Totalmoney << endl;
    }
    friend void operator<<(ostream& out, NAVRUZ temp);
    friend void operator<<(istream& in, NAVRUZ temp);
    
};
void operator<<(ostream& out, NAVRUZ temp) {
    string temp2;

    ifstream stream1("eventNAVRUZ");
    stream1>>temp2;
    out << temp2;
    stream1.close();
}

void operator>>(istream& in, NAVRUZ temp) {
    ofstream stream1("eventNAVRUZ");

    stream1 << temp.Numberof_attendance;
    stream1.close();
}

int main()
{
    system("color 30"); // my hint

    cout << "\t\t\tMEKHROL BAZAROV"; // my name and surname
    cout << "\n\t\t\tU2010046" << endl; // my id
    cout << "\t\t\tSection - 003" << endl; // my section number

    while (2010046 - 2010046 != 5)
    {  // menu
        cout << "\n\t\t\t\t\tMENU OF " << endl;
        cout << "\t\t\t\t\t{1} Do not have pass" << endl;
        cout << "\t\t\t\t\t{2} Have pass" << endl;
        cout << "\t\t\t\t\t{3} Checking total_money and total number of attendance" << endl;
        cout << "\t\t\t\t\t{4} Writing to file" << endl;
        cout << "\t\t\t\t\t{5} QUit MEKHROL's PROGRAM" << endl;
        int Mekhrol_choice; // in order to avoid plagiarism (( other's may have choice 
        cin >> Mekhrol_choice;
        system("cls"); // it will clear the screen after choice
        switch (Mekhrol_choice) // in order to avoid plagiarism (( other's may have choice 
        {
        case 1:
           temp.noPass();
            break;
        case 2:
           temp.withPass();
            break;
        case 3:
            temp.Display();
            break;
        case 4:
            cin >> temp;
            break;
        case 5:
           cin >> temp;
            break;
        default:
            cout << "Write correct value of the menu number!";
            break;
        }
        //system("cls");
    }


    system("pause");
    return 0;
}