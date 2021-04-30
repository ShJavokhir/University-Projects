/*
    This code is written by Javokhir Shomuratov
    U2010257
    Started at; 21:19 22-april 2021
    Finished at: not finished yet
    Telegram: @shjavohir
    Github: https://github.com/shjavokhir
*/



/*

DISCLAIMER


I AM VERY TIRED OF THIS harmful (bad) PROGRAM, IT DOES NOT WORK PROPERLY, CPP is very .....

DONT COPY THIS TASK YET

I spent about 2.30 hours for this ***. But there are still bugs with addRecord function.....

I hope i will fix them tomorrow


*/



#include<iostream>
#include<fstream>
using namespace std;

ifstream ifs;
ofstream ofs;
ofstream tempOfs;

//defining Person class
class Person{
    private:
        string name, telNumber;
    public:
        void setData(string name, string telNumber){
            this->name = name;
            this->telNumber = telNumber;
        }
        void printData(){
            cout<<"Name: "<<name<<" TelNumber: "<<telNumber<<endl;
        }
        string getName(){
            return name;
        }
        string getTelNumber(){
            return telNumber;
        }

};
Person person;

void openFiles(){
    ifs.open("data", ios::binary);
    ofs.open("data", ios::binary | fstream::in | fstream::out);
    tempOfs.open("temp", ios::binary);
}
void closeFiles(){
    ifs.close();
    ofs.close();
    tempOfs.close();
}
void getTelNumberByName(){
    ifs.clear();
    ifs.seekg(0, ios::beg);
    system("clear");
    string name;
    cout<<"Enter name to get corresponding tel number: ";
    cin>>name;
    while(ifs.read((char *)&person, sizeof(Person))){
        if(person.getName() == name){
            cout<<person.getTelNumber()<<" is the tel number you want"<<endl;
            return;
        }
    }
    cout<<"Name not found;"<<endl;
}

void getNameByTelNumber(){
    ifs.clear();
    ifs.seekg(0, ios::beg);
    system("clear");
    string telNumber;
    cout<<"Enter tel number to get corresponding name: ";
    cin>>telNumber;
    while(ifs.read((char *)&person, sizeof(Person))){
        if(person.getTelNumber() == telNumber){
            cout<<person.getName()<<" is the name you want"<<endl;
            return;
        }
    }
    cout<<"Tel number not found"<<endl;
}

void deleteRecordByTelNumber(){
    ifs.clear();
    ifs.seekg(0, ios::beg);
    string telNumber;
    bool isFound = false;
    cout<<"Enter tel number of the record you want to delete: ";
    cin>>telNumber;

    while(ifs.read((char *)&person, sizeof(Person))){
        if(person.getTelNumber() != telNumber){
            tempOfs.write((char *)&person, sizeof(Person));
        }else{
            isFound = true;
        }
    }

    
    remove("data");
    rename("temp", "data");
    if(isFound){
        cout<<"Record with tel number of "<<telNumber<<" is deleted"<<endl;
    }
    closeFiles();
    openFiles();

}

void addRecord(){
    int positionToAdd;
    string name, telNumber;
    cout<<"Enter the position to add new record: ";
    cin>>positionToAdd;
    cout<<"Name: ";
    cin>>name;
    cout<<"Tel number: ";
    cin>>telNumber;
    person.setData(name, telNumber);
    //ofs.seekp(0, ios::end);
    //int totalBytes = ifs.tellg();
    //int totalRecords = totalBytes / (sizeof(Person)*1.0);
    int realPositionToAdd = sizeof(Person) * (positionToAdd - 1);
    ofs.seekp(realPositionToAdd);
    ofs.write((char *)&person, sizeof(Person));
}

void showFileContents(){
    ifs.clear();
    ifs.seekg(0, ios::beg);
    system("cls");
    cout<<"Below is the data inside the file: "<<endl;
    //reading all the content of the binary file
    while(ifs.read((char*)&person, sizeof(Person))){
        person.printData();
    }
}

void showMenu(){
    int usersChoice;
    while(true){
        cout<<"<=== MENU ===>"<<endl;
        cout<<"1) Get tel number by name"<<endl;
        cout<<"2) Get name by tel number"<<endl;
        cout<<"3) Delete record by tel number"<<endl;
        cout<<"4) Add record to the specific location"<<endl;
        cout<<"5) Print file contents"<<endl;
        cout<<"0) Exit"<<endl<<endl;
        cout<<"Your choice: ";
        cin>>usersChoice;
        switch(usersChoice){
            case 1:
                getTelNumberByName();
                break;
            case 2:
                getNameByTelNumber();
                break;
            case 3:
                deleteRecordByTelNumber();
                break;
            case 4:
                addRecord();
                break;
            case 5:
                showFileContents();
            default:
                break;
        }
    }
}


//clean main function
int main(){
    openFiles();
    showMenu();
    closeFiles();
    return 0;
}