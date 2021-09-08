/*
    Started at 17:45 01.05.2021
    Finished at 
    Total lines of code: 
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
    bool isAppRoleChanged;
public:
    virtual void handleMenu()
    {   
        isAppRoleChanged = false;
        char usersChoice;

        while (!isAppRoleChanged)
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
            case '5':
                isAppRoleChanged = true;
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
        cout << "|===============| ADMIN MENU |=================|" << endl;
        cout << " ----------------------------------------------" << endl;
        cout << "| [1] Tickets list                             |" << endl;
        cout << "| [2] Add new ticket                           |" << endl;
        cout << "| [3] Delete ticket                            |" << endl;
        cout << "| [4] About                                    |" << endl;
        cout << "| [5] Switch to client application             |" << endl;
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
        }
        else
        {
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

class ClientApp : public Application, public GeneralFunctions
{
private:
    ofstream ofs, tempOfs;
    ifstream ifs;
    bool isAppRoleChanged;

public:
    virtual void handleMenu()
    {
        isAppRoleChanged = false;
        char usersChoice;

        while (!isAppRoleChanged)
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
                bookTicket();
                break;
            case '2':
                printMyTickets();
                break;
            case '3':
                aboutMenu();
                break;
            case '4':
                isAppRoleChanged = true;
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
        cout << "|===============| CLIENT MENU |================|" << endl;
        cout << " ----------------------------------------------" << endl;
        cout << "| [1] Book ticket                              |" << endl;
        cout << "| [2] My tickets                               |" << endl;
        cout << "| [3] About                                    |" << endl;
        cout << "| [4] Switch to admin application              |" << endl; 
        cout << "| [0] Exit                                     |" << endl;
        cout << " ----------------------------------------------" << endl;
        cout << "|:::::::: Flyght Ticket Booking System ::::::::|" << endl;
        cout << " ----------------------------------------------" << endl;
        cout << "\nYour choice: ";
    }
    void bookTicket()
    {
        system("clear");
        cout << " ----------------------------------------------" << endl;
        cout << "|==============| BOOKING TICKET |==============|" << endl;
        cout << " ----------------------------------------------" << endl;
        cout << " Available tickets: " << endl;

        ifs.open("tickets", ios::binary);
        int i = 1;
        int usersChoice;
        int positionToDelete;
        while (ifs.read((char *)&ticket, sizeof(Ticket)))
        {
            cout << "[" << i << "] ";
            ticket.printData();
            i++;
            usleep(100000);
        }
        cout << "\nEnter the number of Ticket in order to book or 0 for cancel: ";
        cin >> usersChoice;
        if (usersChoice != 0)
        {
            positionToDelete = usersChoice * sizeof(Ticket);
        }
        ifs.close();

        ofs.open("mytickets", ios::binary | ios::app);
        ifs.open("tickets", ios::binary);

        while (ifs.read((char *)&ticket, sizeof(Ticket)))
        {
            if (ifs.tellg() == positionToDelete)
            {
                ofs.write((char *)&ticket, sizeof(Ticket));
            }
        }

        cout << " ----------------------------------------------" << endl;
        cout << "|:::::::::::: BOOKED SUCCESFULLY ::::::::::::::|" << endl;
        cout << " ----------------------------------------------" << endl;
        usleep(2000000);

        ifs.close();
        ofs.close();
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

    void printMyTickets()
    {

        ifs.open("mytickets", ios::binary);
        int i = 1;
        int usersChoice;
        int positionToDelete;
        system("clear");
        cout << " ----------------------------------------------" << endl;
        cout << "|==============| BOOKED TICKETS |==============|" << endl;
        cout << " ----------------------------------------------" << endl;
        while (ifs.read((char *)&ticket, sizeof(Ticket)))
        {
            cout << "[" << i << "] ";
            ticket.printData();
            i++;
            usleep(100000);
        }
        ifs.close();

        cout << "\nEnter the number of Ticket in order to delete it or 0 for cancel: ";
        cin >> usersChoice;
        if (usersChoice != 0)
        {
            positionToDelete = usersChoice * sizeof(Ticket);

            tempOfs.open("temp", ios::binary);
            ofs.open("mytickets", ios::binary | ios::app);
            ifs.open("mytickets", ios::binary);

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
            remove("mytickets");
            //renaming file named temp into data
            rename("temp", "mytickets");
            ifs.close();
            ofs.close();
            tempOfs.close();
            if (isFound)
            {
                cout << " ----------------------------------------------" << endl;
                cout << "|:::::::::::: DELETED SUCCESFULLY :::::::::::::|" << endl;
                cout << " ----------------------------------------------" << endl;

                usleep(2000000);
            }
            else
            {
                cout << " ----------------------------------------------" << endl;
                cout << "|:::::::::: TICKET NUMBER NOT FOUND :::::::::::|" << endl;
                cout << " ----------------------------------------------" << endl;

                usleep(2000000);
            }
        }
    }
};

int main()
{
    Application *app;
    bool switcher = true;
    while (1 != 2)
    {
        switcher = !switcher;
        if (switcher)
        {
            app = new ClientApp();
        }
        else
        {
            app = new AdminApp();
        }

        app->handleMenu();
    }

    return 777;
}