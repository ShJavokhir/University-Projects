/*
    Team project
        Ticket booking
    Team members:
        Ilyar (id), Qobil (id), Javokhir (id)
    Section number:
        I dont know
*/

#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;

static string INPUT_SHOULD_BE_DIGIT_EXCEPTION = "Input should be digit !";
static string INCORRECT_MENU_EXCEPTION = "You have entered incorrect menu number !";

enum ROLES
{
    ADMIN,
    CLIENT
};

class Ticket
{
private:
    string toWhere;
    int seatNumber;
    double price;

public:
    void setData(string toWhere, int seatNumber, double price)
    {
        this->toWhere = toWhere;
        this->seatNumber = seatNumber;
        this->price = price;
    }
    void printData()
    {
        cout << "Flying to: " << toWhere << " Seat number: " << seatNumber << " Price: " << price << endl;
    }
};

Ticket ticket;

class Exception
{
public:
    void showError(string message)
    {
        system("clear");
        cout << " ----------------------------------------------" << endl;
        cout << "|==================| ERROR |==================|" << endl;
        cout << " ----------------------------------------------" << endl;
        cout << "  " << message << endl;
        cout << " ----------------------------------------------" << endl;
        cout << "|:::::::: Flyght Ticket Booking System ::::::::|" << endl;
        cout << " ----------------------------------------------" << endl;
        usleep(2000000);
    }
};

class GeneralFunctions : protected Exception
{
public:
    void aboutMenu()
    {
        system("clear");
        cout << " ----------------------------------------------" << endl;
        cout << "|=================| AUTHORS |==================|" << endl;
        cout << " ----------------------------------------------" << endl;
        cout << "| Sobitov Ilyar U2010267                       |" << endl;
        cout << "| Tulaganov Qobiljon U2010285                  |" << endl;
        cout << "| Javokhir Shomuratov U2010257                 |" << endl;
        cout << " ----------------------------------------------" << endl;
        cout << "|:::::::: Flyght Ticket Booking System ::::::::|" << endl;
        cout << " ----------------------------------------------" << endl;
        usleep(4000000);
    }

    void exitProgram()
    {
        system("clear");
        cout << " ----------------------------------------------" << endl;
        cout << "|=========| THANKS FOR THE ATTENTION |=========|" << endl;
        cout << " ----------------------------------------------" << endl;
        usleep(2000000);
        exit(0);
    }
};

class Application
{
public:
    virtual void handleMenu() = 0;
};

class AdminApp : public Application, public GeneralFunctions
{
private:
    ofstream ofs, tempOfs;
    ifstream ifs;

public:
    virtual void handleMenu()
    {
        char usersChoice;

        while (2 + 2 != 5)
        {
            showMenu();
            cin >> usersChoice;
            if (!std::isdigit(usersChoice))
            {
                showError(INPUT_SHOULD_BE_DIGIT_EXCEPTION);
                continue;
            }
            switch (usersChoice)
            {
            case '1':
                printTickets();
                break;
            case '2':
                addNewTicket();
                break;
            case '3':
                deleteTicket();
                break;
            case '4':
                aboutMenu();
                break;
            case '0':
                exitProgram();
            default:
                showError(INCORRECT_MENU_EXCEPTION);
                break;
            }
        }
    }
    void showMenu()
    {
        cout << " ----------------------------------------------" << endl;
        cout << "|===================| MENU |===================|" << endl;
        cout << " ----------------------------------------------" << endl;
        cout << "| [1] Tickets list                             |" << endl;
        cout << "| [2] Add new ticket                           |" << endl;
        cout << "| [3] Delete ticket                            |" << endl;
        cout << "| [4] About                                    |" << endl;
        cout << "| [0] Exit                                     |" << endl;
        cout << " ----------------------------------------------" << endl;
        cout << "|:::::::: Flyght Ticket Booking System ::::::::|" << endl;
        cout << " ----------------------------------------------" << endl;
        cout << "\nYour choice: ";
    }
    void addNewTicket()
    {
        string toWhere;
        int seatNumber;
        double price;
        ofs.open("tickets", ios::binary | ios::app);

        system("clear");
        cout << " ----------------------------------------------" << endl;
        cout << "|================| NEW TICKET |================|" << endl;
        cout << " ----------------------------------------------" << endl;

        cout << "Where to fly: ";
        cin >> toWhere;
        cout << "Seat number: ";
        cin >> seatNumber;
        cout << "Price: ";
        cin >> price;
        ticket.setData(toWhere, seatNumber, price);
        ofs.write((char *)&ticket, sizeof(Ticket));
        ofs.close();
        cout << " ----------------------------------------------" << endl;
        cout << "|:::::::::::::::| SUCCESFULLY |::::::::::::::::|" << endl;
        cout << " ----------------------------------------------" << endl;
        usleep(2000000);
    }

    void printTickets()
    {
        ifs.open("tickets", ios::binary);

        system("clear");
        cout << " ----------------------------------------------" << endl;
        cout << "|==============| LIST OF TICKETS |=============|" << endl;
        cout << " ----------------------------------------------" << endl;

        while (ifs.read((char *)&ticket, sizeof(Ticket)))
        {
            ticket.printData();
            usleep(100000);
        }

        cout << " ----------------------------------------------" << endl;
        cout << "|:::::::: Flyght Ticket Booking System ::::::::|" << endl;
        cout << " ----------------------------------------------" << endl;

        usleep(2000000); //TODO:: this line should be replaced with system("pause");

        ifs.close();
    }
    void deleteTicket()
    {

        ifs.open("tickets", ios::binary);
        int i = 1;
        int usersChoice;
        int positionToDelete;
        system("clear");
        cout << " ----------------------------------------------" << endl;
        cout << "|==============| Deleting ticket |=============|" << endl;
        cout << " ----------------------------------------------" << endl;
        while (ifs.read((char *)&ticket, sizeof(Ticket)))
        {
            cout << "[" << i << "] ";
            ticket.printData();
            i++;
            usleep(100000);
        }
        cout << "\nEnter the number of Ticket in order to delete it or 0 for cancel: ";
        cin >> usersChoice;
        if (usersChoice != 0)
        {
            positionToDelete = usersChoice * sizeof(Ticket);
        }
        ifs.close();

        tempOfs.open("temp", ios::binary);
        ofs.open("tickets", ios::binary | ios::app);
        ifs.open("tickets", ios::binary);

        bool isFound = false;

        while (ifs.read((char *)&ticket, sizeof(Ticket)))
        {
            if (ifs.tellg() != positionToDelete)
            {
                tempOfs.write((char *)&ticket, sizeof(Ticket));
            }
            else
            {
                isFound = true;
            }
        }

        //deleting file named data
        remove("tickets");
        //renaming file named temp into data
        rename("temp", "tickets");
        if (isFound)
        {
            cout << " ----------------------------------------------" << endl;
            cout << "|:::::::::::: DELETED SUCCESFULLY :::::::::::::|" << endl;
            cout << " ----------------------------------------------" << endl;

            usleep(2000000); 
        }else{
            cout << " ----------------------------------------------" << endl;
            cout << "|:::::::::: TICKET NUMBER NOT FOUND :::::::::::|" << endl;
            cout << " ----------------------------------------------" << endl;

            usleep(2000000); 
        }
        ifs.close();
        ofs.close();
        tempOfs.close();
    }
};

int main()
{
    Application *app = new AdminApp();
    app->handleMenu();
    return 777;
}