/*
    Team project
        Ticket booking
    Team members:
        Ilyar (id), Qobil (id), Javokhir (id)
    Section number:
        I dont know
*/

#include<iostream>
#include <unistd.h>

using namespace std;

const string INPUT_SHOULD_BE_DIGIT_EXCEPTION = "Input should be digit !";
const string INCORRECT_MENU_EXCEPTION = "You have entered incorrect menu number !";

enum ROLES { ADMIN, CLIENT };

void aboutMenu(){
    system("clear");
    cout<<" ----------------------------------------------"<<endl;
    cout<<"|=================| AUTHORS |==================|"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    cout<<"| Sobitov Ilyar U2010267                       |"<<endl;
    cout<<"| Tulaganov Qobiljon U2010285                  |"<<endl;
    cout<<"| Javokhir Shomuratov U2010257                 |"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    cout<<"|::::::::::::::: Ticket Booking :::::::::::::::|"<<endl;
    cout<<" ----------------------------------------------"<<endl;
}

void showMenu(){
    cout<<" ----------------------------------------------"<<endl;
    cout<<"|===================| MENU |===================|"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    cout<<"| [1]                                          |"<<endl;
    cout<<"| [2]                                          |"<<endl;
    cout<<"| [3]                                          |"<<endl;
    cout<<"| [5] About                                    |"<<endl;
    cout<<"| [0] Exit                                     |"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    cout<<"|::::::::::::::: Ticket Booking :::::::::::::::|"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    cout<<"\nYour choice: ";
}

void showError(string message){
    system("clear");
    cout<<" ----------------------------------------------"<<endl;
    cout<<"|==================| ERROR |==================|"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    cout<<"  "<<message<<endl;
    cout<<" ----------------------------------------------"<<endl;
    cout<<"|::::::::::::::: Ticket Booking :::::::::::::::|"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    usleep(2000000);
}

void exitProgram(){
    system("clear");
    cout<<" ----------------------------------------------"<<endl;
    cout<<"|=========| THANKS FOR THE ATTENTION |=========|"<<endl;
    cout<<" ----------------------------------------------"<<endl;
    usleep(2000000);
    exit(0);
}

void handleMenu(){
    char usersChoice;
    
    while(2+2 != 5){
        showMenu();
        cin>>usersChoice;
        if(!std::isdigit(usersChoice)){
            showError(INPUT_SHOULD_BE_DIGIT_EXCEPTION);
            continue;
        }
        switch (usersChoice)
        {
        case '1':
            break;
        case '0':
            exitProgram();
        default:
            showError(INCORRECT_MENU_EXCEPTION);
            break;
        }
    }
}

int main(){
    handleMenu();
}