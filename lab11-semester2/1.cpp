/*
    This code is written by Javokhir Shomuratov
    U2010257
    Finished at: 21:14 30-april 2021
    Telegram: @shjavohir
    Github: https://github.com/shjavokhir
*/

#include<iostream>
#include<fstream>
using namespace std;
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
};

//function to get input from user then write to the file
void writeToFile(){
    ofstream ofs;
    Person person;
    char usersChoice;
    string name, telNumber;
    //opening binary file (binary file will be created if it is not exist)
    ofs.open("data", ios::binary);

    while(true){
        cout<<"Enter y or Y to write to the file: ";
        cin>>usersChoice;
        if(usersChoice == 'y' || usersChoice == 'Y' ){
            cout<<"Name: ";
            cin>>name;
            cout<<"Tel Number: ";
            cin>>telNumber;
            person.setData(name, telNumber);
            //writing to the binary file
            ofs.write((char*)&person, sizeof(Person));
        }else{
            //the case when user inputs characters other than y and Y
            break;
        }

    }
    ofs.close();
}

void readFromFile(){
    //function to read data from binary file
    ifstream ifs;
    Person person;
    //opening binary file
    ifs.open("data", ios::binary);
    //clearing screen
    system("cls");
    cout<<"Below is the data inside the file: "<<endl;
    //reading all the content of the binary file
    while(ifs.read((char*)&person, sizeof(Person))){
        person.printData();
    }
    ifs.close();
}

//clean main function
int main(){
    writeToFile();
    readFromFile();
    return 0;
}