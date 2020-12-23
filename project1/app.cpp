#include<bits/stdc++.h>
#include<windows.h>

using namespace std;

class Hotel {       // The class
  public:             // Access specifier
    int id;
    string name;
    int rooms;        
    string location;
};
enum USER{ADMIN, CLIENT};
enum SCREEN{DASHBOARD, MY_ORDERS, BOOKING_HOTEL, HOTELS};


USER currentUser = CLIENT; 
SCREEN currentScreen = DASHBOARD;
vector<Hotel> hotels;
const int DELAY_FOR_SHOW_ERROR = 1000; //error showed for 1 second
vector<Hotel> usersOrders;

//this function prints welcome text
void printWelcomeText(){
    const int DELAY_TIME = 60; // in milliseconds
    cout<<"W";
    Sleep(DELAY_TIME);
    cout<<"e";
    Sleep(DELAY_TIME);
    cout<<"l";
    Sleep(DELAY_TIME);
    cout<<"c";
    Sleep(DELAY_TIME);
    cout<<"o";
    Sleep(DELAY_TIME);
    cout<<"m";
    Sleep(DELAY_TIME);
    cout<<"e";
    Sleep(DELAY_TIME);
    cout<<" ";
    Sleep(DELAY_TIME);
    cout<<"t";
    Sleep(DELAY_TIME);
    cout<<"o";
    Sleep(DELAY_TIME);
    cout<<" ";
    Sleep(DELAY_TIME);
    cout<<"m";
    Sleep(DELAY_TIME);
    cout<<"y";
    Sleep(DELAY_TIME);
    cout<<" ";
    Sleep(DELAY_TIME);
    cout<<"p";
    Sleep(DELAY_TIME);
    cout<<"r";
    Sleep(DELAY_TIME);
    cout<<"o";
    Sleep(DELAY_TIME);
    cout<<"g";
    Sleep(DELAY_TIME);
    cout<<"r";
    Sleep(DELAY_TIME);
    cout<<"a";
    Sleep(DELAY_TIME);
    cout<<"m";
    Sleep(DELAY_TIME);
    cout<<" ";
    Sleep(DELAY_TIME);
    cout<<":";
    Sleep(DELAY_TIME);
    cout<<")";
    Sleep(DELAY_TIME);
    cout<<")";
    Sleep(DELAY_TIME);
    cout<<")";
    Sleep(DELAY_TIME);
    cout<<")";
    Sleep(DELAY_TIME);
    Sleep(DELAY_TIME);
    Sleep(DELAY_TIME);
    Sleep(DELAY_TIME);
    Sleep(DELAY_TIME);
    Sleep(DELAY_TIME);
    system("cls");
}
void printMenuForClient(){
    const int DELAY_TIME = 120; // in ms
    
    cout<<"---=========== CLIENT MENU ===========---"<<endl;
    Sleep(DELAY_TIME);
    cout<<"1) Dashboard"<<endl;
    Sleep(DELAY_TIME);
    cout<<"2) My orders"<<endl;
    Sleep(DELAY_TIME);
    cout<<"3) Booking hotel"<<endl;
    Sleep(DELAY_TIME);
    cout<<"---===================================---"<<endl;
    
}
void printMenuForAdmin(){
    const int DELAY_TIME = 120; // in ms
    
    cout<<"---====== CLIENT MENU ======---"<<endl;
    Sleep(DELAY_TIME);
    cout<<"||        1) MY ORDERS       ||"<<endl;
    
}
void printUserOrders(){
    const int DELAY_TIME = 120; // in ms
    
    cout<<"---=========== My orders ===========---"<<endl;
    Sleep(DELAY_TIME);
    for(int i=0;i<usersOrders.size(); i++){
        cout<<" ID: "<<usersOrders[i].id<<" name: "<<usersOrders[i].name<<" location: "<<usersOrders[i].location<<" rooms: "<<usersOrders[i].rooms<<endl;
        Sleep(DELAY_TIME);
    }
    cout<<" 0) Back"<<endl;
    Sleep(DELAY_TIME);
    if(usersOrders.size() == 0){
        cout<<" You have no orders yet"<<endl;
        Sleep(DELAY_TIME);
    
    }else{
        cout<<" Enter the id of the hotel in order to delete"<<endl;
        Sleep(DELAY_TIME);
    }
    cout<<"---===================================---"<<endl;
    
}
void deleteUsersHotel(int hotelIndex){

}
//main function that will be called first
int main(){
    //printWelcomeText();

    //infinity loop
    int usersChoice = 0;
    while(true){
        system("cls");
        if(currentUser == ADMIN){
            printMenuForAdmin();

        }else if(currentUser == CLIENT){
            if(currentScreen == DASHBOARD){
                printMenuForClient();
            }else if(currentScreen == MY_ORDERS){
                printUserOrders();
            };
            cin>>usersChoice;
            if(currentScreen == DASHBOARD){
                switch(usersChoice){
                    case 1:
                        currentScreen = DASHBOARD;
                        break;
                    case 2:
                        currentScreen = MY_ORDERS;
                        break;
                    case 3:   
                        currentScreen = BOOKING_HOTEL;
                        break;
                    default:
                        cout<<"You are entered invalid menu !!!";
                        Sleep(DELAY_FOR_SHOW_ERROR);
                        break;         
                }
            }else if(currentScreen == MY_ORDERS){
                switch (usersChoice)
                {
                case 0:
                    currentScreen = DASHBOARD;
                    break;
                default:
                    deleteUsersHotel(usersChoice);
                }
            }

        }
        
    }
    std::getchar();
}

