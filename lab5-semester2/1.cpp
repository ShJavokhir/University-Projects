#include<iostream>
#include<windows.h> //disable this if you are in mac os
//#include <unistd.h> //enable this line if you are in mac os
//#include <term.h> //enable this line if you are in mac os
//#include <unistd.h> //enable this line if you are in mac os


using namespace std;
class DayTime{
    private:
        int hour, minute, second;
    public:
        DayTime(int hour, int minute, int second){
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        int getHour () const{
            return this->hour;
        }
        int getMinute() const{
            return this->minute;
        }
        int getSecond() const{
            return this->second;
        }
        int getAllInSeconds() const{
            return hour*60*60 + minute*60 + second;
        }
        void operator ++(){
            this->second ++;
        }
        void operator --(){
            this->minute --;
        }
};

int main(){
    //declaring variables
    int hour, minute, second;
    //asking user to enter initial time values
    cout<<"Enter initial time\n";
    cout<<"Hour: "; cin>>hour;
    cout<<"Minute: "; cin>>minute;
    if(minute >= 60){
        hour += minute/60;
        minute = minute % 60  
    }
    cout<<"Second: "; cin>>second;
    //creating new object of class DayTime
    DayTime exampleDayTime(hour, minute, second);
    system("cls");
    while("C++" != "JAVA"){
        //showing menu for user
        cout<<"\nMENU"<<endl;
        cout<<"[1] Display time"<<endl;
        cout<<"[2] Display time in seconds"<<endl;
        cout<<"[3] Increment seconds"<<endl;
        cout<<"[4] Decrement minutes"<<endl;
        cout<<"[0] Exit"<<endl;
        int choice;
        cin>>choice;
        system("cls");
        switch (choice)
        {
        case 1:
            cout<<"Hour: "<<exampleDayTime.getHour()<<" Minute: "<<exampleDayTime.getMinute()<<" Second: "<<exampleDayTime.getSecond()<<"\n\n";
            //usleep(4000000); //enable this line if you are in mac os
            Sleep(4000); //disable this if you are in mac os
            
            break;
        case 2:
            cout<<"Time in seconds: "<<exampleDayTime.getAllInSeconds()<<"\n\n";          
            //usleep(4000000); enable this line if you are in mac os
            Sleep(4000);//disable this if you are in mac os
            break;
        case 3:
            
            ++exampleDayTime;
            cout<<"Second is increased by 1\n\n";
            //usleep(2000000); //enable this line if you are in mac os
            Sleep(2000); ////disable this if you are in mac os
            break;
        case 4:
            --exampleDayTime;
            cout<<"Minute is decreased by 1\n\n";
            //usleep(2000000); //enable this line if you are in mac os
            Sleep(2000); ////disable this if you are in mac os
            break;
        case 0:
            return 777;
            break;
        
        default:
            cout<<"Your entered incorrect menu number !";
            break;
        }
        
        system("cls");
        
    } 
    return 0;
}