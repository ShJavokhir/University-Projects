#include <iostream>
#include <fstream>
using namespace std;

class NAVRUZ
{
private:
    int Number_of_attendeest;
    double Total_Money;

public:
    void noPASS()
    {
        Number_of_attendeest++;
        Total_Money += 20000;
    }
    void withPASS()
    {
        Number_of_attendeest++;
    }
    NAVRUZ()
    {
        Number_of_attendeest = 0;
        Total_Money = 0;
    }
    void DISPLAY()
    {
        cout << "Number of attendeest " << Number_of_attendeest << endl;
        cout << "Total Money: " << Total_Money << endl;
    }

    friend void operator<<(ostream &out, NAVRUZ temp);
    friend void operator>>(istream &in, NAVRUZ temp);
};
void operator>>(istream &in, NAVRUZ temp)
{
    ofstream stream1("eventNAVRUZ");
    stream1 << temp.Number_of_attendeest;
    stream1.close();
}
void operator<<(ostream &out, NAVRUZ temp)
{
    string temp2;
    ifstream stream1("eventNAVRUZ");
    stream1 >> temp2;
    out << temp2;
    stream1.close();
}

int main()
{
    NAVRUZ object;
    int usersChoice;

    while (true)
    {
        cout << "" << endl;
        cout << "Don’t have Pass (Enter 1)" << endl;
        cout << "Have Pass (Enter 2)" << endl;
        cout << "To check Total number of attendees and Total money collected (Enter 3)" << endl;
        cout << "Write to File (Enter 4)" << endl;
        cout << "Read from file (Enter 5)" << endl;
        cout << "To Exit Program (Enter 6)" << endl;
        cout << "Your choice: ";
        cin >> usersChoice;
        switch (usersChoice)
        {
        case 1:
            object.noPASS();
            break;
        case 2:
            object.withPASS();
            break;
        case 3:
            object.DISPLAY();
            break;
        case 4:
            cin >> object;
            break;
        case 5:
            cout << object;
            break;
        default:
            exit(0);
        }
        system("pause");
    }

    return 0;
}