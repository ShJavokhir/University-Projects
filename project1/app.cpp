/*
 

 [Full name] : [Javokhir Shomuratov]
 [Student year]: [Freshman]
 [Finished date] : [25.12.2020 15:54]
 [Taken time to finish]: [only 1.5 days (with breaks)]
 [Used IDE] : [VScode]
 [OS] : [Windows]
 [Listened musics while doing this project] : [https://www.youtube.com/watch?v=DJbYSST4_w0&list=RDDJbYSST4_w0&start_radio=1]
 [Message to others] : [Never give up]

*/

#include<bits/stdc++.h> //This the best universal library
#include<windows.h> //I used some commands that work in windows command line, so this libary can help

using namespace std;   

class Hotel {       // The hotel class that include information about hotel
  public:  
    string name; 
    int rooms;  
    string location;    
};
enum USER{ADMIN, CLIENT}; // This is the one of the best thing called Enumeration :)
enum SCREEN{DASHBOARD, MY_ORDERS, BOOKING_HOTEL, HOTELS, ADD_HOTEL}; //This is also Enumeration about screens.


USER currentUser = CLIENT;  // This is the current user type information.
SCREEN currentScreen = DASHBOARD; //This is the current screen information
vector<Hotel> hotels; //This stores all the hotels
const int DELAY_FOR_SHOW_ERROR = 1000; //This the delay time for showing error
vector<Hotel> usersOrders; // This vector stores users booked hotels.

//This function adds some dummy hotels to hotels vector, so we are not required to add hotels to book.
void fillDummyHotels(){
    Hotel dummyHotel;
    dummyHotel.name = "City Palace";
    dummyHotel.location = "Tashkent";
    dummyHotel.rooms = 5;
    hotels.push_back(dummyHotel);

    dummyHotel.name = "Grand ART";
    dummyHotel.location = "Urgench";
    dummyHotel.rooms = 2;
    hotels.push_back(dummyHotel);

    dummyHotel.name = "Wyndham";
    dummyHotel.location = "Tashkent";
    dummyHotel.rooms = 3;
    hotels.push_back(dummyHotel);
}

//this function prints welcome text
void printWelcomeText(){
    const int DELAY_TIME = 60; // in milliseconds
    cout<<" W";
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
    
    cout<<"\n\n This program is developed By Javokhir Shomuratov"<<endl;
    Sleep(DELAY_TIME);
    cout<<" Telegram: @ShJavokhir"<<endl;
    Sleep(DELAY_TIME);
    cout<<" Github page: https://github.com/ShJavokhir"<<endl;
    Sleep(DELAY_TIME);
    cout<<" You can find full source code with nice comments from github page"<<endl;
    Sleep(DELAY_TIME);
    cout<<" Thank you for attention !\n\n";
    
    system("pause"); // This code shows "Please press any key to continue" message :)
    system("cls"); // This code clears screen
}
//This function prints dashboard menus for client;
void printMenuForClient(){
    const int DELAY_TIME = 120; // delay time to show every menu. (In milliseconds)
    
    cout<<" <---=========== CLIENT MENU ===========--->"<<endl;
    Sleep(DELAY_TIME);
    cout<<" [1] Dashboard"<<endl;
    Sleep(DELAY_TIME);
    cout<<" [2] My orders"<<endl;
    Sleep(DELAY_TIME);
    cout<<" [3] Booking hotel"<<endl;
    Sleep(DELAY_TIME);
    cout<<" [4] Switch to admin role"<<endl;
    Sleep(DELAY_TIME);
    
    cout<<" <---===================================--->"<<endl;

    cout<<endl;
    cout<<" Your choice: ";
    
}
//This function prints dashboard menus for admin
void printMenuForAdmin(){ 
    const int DELAY_TIME = 120; // in ms
    
    cout<<" <---=========== CLIENT MENU ===========--->"<<endl;
    Sleep(DELAY_TIME);
    cout<<" [1] Dashboard"<<endl;
    Sleep(DELAY_TIME);
    cout<<" [2] Hotels"<<endl;
    Sleep(DELAY_TIME);
    cout<<" [3] Add new hotel"<<endl;
    Sleep(DELAY_TIME);
    cout<<" [4] Switch to client role"<<endl;
    Sleep(DELAY_TIME);
    
    cout<<" <---===================================--->"<<endl;

    cout<<endl;
    cout<<" Your choice: ";
}

// this function prints users orders
void printUserOrders(){
    const int DELAY_TIME = 120; // in ms
    
    cout<<" <---=========== My orders ===========--->"<<endl;
    Sleep(DELAY_TIME);
    for(int i=0;i<usersOrders.size(); i++){
        cout<<" ["<<i+1<<"] name: "<<usersOrders[i].name<<" location: "<<usersOrders[i].location<<" rooms: "<<usersOrders[i].rooms<<endl;
        Sleep(DELAY_TIME);
    }
    cout<<" [0] Back"<<endl;
    Sleep(DELAY_TIME);
    if(usersOrders.size() == 0){
        cout<<" You have no orders yet"<<endl;
        Sleep(DELAY_TIME);
    
    }else{
        cout<<" Enter the index of the hotel in order to delete"<<endl;
        Sleep(DELAY_TIME);
    }
    cout<<"---===================================---"<<endl;
    cout<<endl;
    cout<<" Your choice: ";
    
}
//this function deletes hotel that user already booked by its index
void deleteUsersHotel(int hotelIndex){
    hotelIndex -= 1; //Because we showed hotel indexes by adding them 1 to users, so we have to subsract 1 here
    
    if(hotelIndex >= 0 && hotelIndex < usersOrders.size()){
        usersOrders.erase(usersOrders.begin() + hotelIndex);
        cout<<" This hotel succesfully deleted from your booking list !!!";
    }else{
        cout<<" You entered wrong input !!!";
    }

    
    Sleep(1500);

}
//this function prints hotels that user can book
void printHotelsToBook(){
    const int DELAY_TIME = 120; // in ms
    
    cout<<" <---=========== These are hotels you can book ===========--->"<<endl;
    Sleep(DELAY_TIME);
    
    for (int i=0; i<hotels.size(); i++) {
        cout<<" ["<<i+1<<"]"<<" Name: "<<hotels[i].name<<" Location: "<<hotels[i].location<<" Rooms: "<<hotels[i].rooms<<endl;
        Sleep(DELAY_TIME);
    }
    cout<<" [0] Back"<<endl;
    if(hotels.size() == 0){
        cout<<" * There is no any hotels to book right now"<<endl;
    }else{
        cout<<" *Type the index number of hotel in order to book"<<endl;
    }
    cout<<" Your choice: ";
}   
//this function will be book hotel that is at index
void bookHotel(int hotelIndexToBook){
    hotelIndexToBook -= 1; //Because we showed hotels indexes to user by adding 1 to their indexes;
    if(hotelIndexToBook >=0 && hotelIndexToBook < hotels.size()){
        usersOrders.push_back(hotels[hotelIndexToBook]);
        cout<<" Hotel booked succesfully !!!";
    }else{
        cout<<" You entered wrong input !!!";
    }
    Sleep(1000);
    
}
//this function returns all hotels that are available
void printAdminsHotels(){
    const int DELAY_TIME = 120; // in ms
    
    cout<<" <---=========== Hotels ===========--->"<<endl;
    Sleep(DELAY_TIME);
    for(int i=0;i<hotels.size(); i++){
        cout<<" ["<<i+1<<"] name: "<<hotels[i].name<<" location: "<<hotels[i].location<<" rooms: "<<hotels[i].rooms<<endl;
        Sleep(DELAY_TIME);
    }
    cout<<" [0] Back"<<endl;
    Sleep(DELAY_TIME);
    if(hotels.size() == 0){
        cout<<" There is no hotels yet"<<endl;
        Sleep(DELAY_TIME);
    
    }else{
        cout<<" Enter the index of the hotel in order to delete"<<endl;
        Sleep(DELAY_TIME);
    }
    cout<<" ---===================================---"<<endl;
    cout<<endl;
    cout<<" Your choice: ";
}
//this function deletes hotel with the index
void deleteAdminsHotel(int hotelIndex){
    hotelIndex -= 1; //Because we showed hotel indexes by adding them 1 to Admin, so we have to subsract 1 here
    
    if(hotelIndex >= 0 && hotelIndex < hotels.size()){
        hotels.erase(hotels.begin() + hotelIndex);
        cout<<" This hotel succesfully deleted !!!";
    }else{
        cout<<" You entered wrong input !!!";
    }

    Sleep(1500);
}
//this function adds new hotel by getting information about new hotel
void addNewHotel(){
    const int DELAY_TIME = 120; // in ms
    string newHotelName, newHotelLocation;
    int newHotelRooms;
    cout<<" <---=========== Adding new hotel ===========--->"<<endl;
    Sleep(DELAY_TIME);
    cout<<" Please enter the details in order to add new hotel"<<endl;
    Sleep(DELAY_TIME);
    std::getchar(); // I dont know what this line does but when I dont put it here my code does not work properly :(
    cout<<" Hotel name: "; std::getline(std::cin, newHotelName); //I used this type of getting input from console. Because orinary cin method can not read words with spaces;
    cout<<" Hotel location: "; std::getline(std::cin, newHotelLocation);
    cout<<" Hotel rooms: "; cin>>newHotelRooms;
    Hotel newHotel;
    newHotel.name = newHotelName;
    newHotel.location = newHotelLocation;
    newHotel.rooms = newHotelRooms;
    hotels.push_back(newHotel);
    cout<<" New hotel added succesfully !";
    currentScreen = DASHBOARD;
    Sleep(1500);
}

//main function that will be called first
int main(){
    
    system("color 0A"); //this is for text color
    fillDummyHotels(); //this is for generate initial dummy hotels..
    printWelcomeText(); // prints welcome text...

    
    int usersChoice = 0; 
    //infinity loop ......................
    while(true){
        system("cls"); //clears screen
        if(currentUser == ADMIN){
            //This block is for admin
            if(currentScreen == DASHBOARD){
                printMenuForAdmin();
            }if(currentScreen == HOTELS){
                printAdminsHotels();
            }else if(currentScreen == ADD_HOTEL){
                addNewHotel();
                currentScreen = DASHBOARD;
                continue;
            }

            cin>>usersChoice;
            
            if(currentScreen == DASHBOARD){
                switch(usersChoice){
                    case 1:
                        currentScreen = DASHBOARD;
                        break;
                    case 2:
                        currentScreen = HOTELS;
                        break;
                    case 3:   
                        currentScreen = ADD_HOTEL;
                        break;
                    case 4: 
                        currentUser = CLIENT;
                        currentScreen = DASHBOARD;
                        break;
                    
                    default:
                        cout<<"You are entered invalid menu !!!";
                        Sleep(DELAY_FOR_SHOW_ERROR);
                        break;         
                }
            }else if(currentScreen == HOTELS){
                switch (usersChoice)
                {
                case 0:
                    currentScreen = DASHBOARD;
                    break;
                default:
                    deleteAdminsHotel(usersChoice);
                    break;
                }
            }
            
        }else if(currentUser == CLIENT){
            //this block is for client
            if(currentScreen == DASHBOARD){
                printMenuForClient();
            }else if(currentScreen == MY_ORDERS){
                printUserOrders();
            }else if(currentScreen == BOOKING_HOTEL){
                printHotelsToBook();
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
                    case 4: 
                        currentUser = ADMIN;
                        currentScreen = DASHBOARD;    
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
                    break;
                }
            }else if(currentScreen == BOOKING_HOTEL){
                switch (usersChoice)
                {
                case 0:
                    currentScreen = DASHBOARD;
                    break;
                default:
                    bookHotel(usersChoice);
                    break;
                }
            }

        }
        
    }
    
}

