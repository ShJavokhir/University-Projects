#include<bits/stdc++.h>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        void display(){
            cout<<"Name: "<<name<<" Age: "<<age;
        }
        Person(){
            name = "";
            age = 0;
        }
        Person(string name, int age){
            this->name = name;
            this->age = age;
        }
};

int main(){
    Person samplePerson;
    samplePerson.display();
}
