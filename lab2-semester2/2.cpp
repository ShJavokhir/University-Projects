#include<bits/stdc++.h>
using namespace std;
class Record{
    private:
        string name;
        float salary;
        string dateOfBirth;

    public:
        Record(){
            name = "";
            salary = 0.0;
            dateOfBirth = "";
        }
        Record(string name, float salary, string dateOfBirth){
            this->name = name;
            this->salary = salary;
            this->dateOfBirth = dateOfBirth;
        }
        void changeName(string newName){
            name = newName;
        }
        void changeSalary(float newSalary){
            salary = newSalary;
        }
        void changeDateOfBirth(string newDateOfBirth){
            dateOfBirth = newDateOfBirth;
        }
        void display(){
            cout<<"Name: "<<name<<" Salary: "<<salary<<" Date of birth: "<<dateOfBirth<<endl;
        }
};
int main(){
    //we will initialize object of Record with initial values
    Record myRecord("Javokhir", 100, "birth it is secret");

    //we define our pointer
    Record *myPointerRecord = &myRecord;

    //we can use dot operator here to call member function (display)
    myRecord.display();

    //we can not access display method using dot, because this is pointer, so we will use -> operator to access member function
    myPointerRecord->display();
}
