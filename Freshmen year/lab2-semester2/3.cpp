#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
        string name;
        int accountNumber;
        float balance;
    public:
        BankAccount(string name, int accountNumber, float balance){
            this->name = name;
            this->accountNumber = accountNumber;
            this->balance = balance;
            cout<<"New bank account was created for "<<name<<endl;
        }
        ~BankAccount(){
            cout<<"Bank account with number "<<accountNumber<<" has deleted"<<endl;
        }
        void display(){
            cout<<"Name: "<<name<<" Account number: "<<accountNumber<<" Balance: "<<balance<<endl;
        }
};

int main(){
    //initialize values
    BankAccount myBankAccount("Javokhir", 7707, 1799);
    BankAccount yourBankAccount("Someone", 7808, 5600.99);

    //displaying account information
    myBankAccount.display();
    yourBankAccount.display();

    //deleting accounts
    //I commented lines below, because my compiler destructing objects itself when program finishes, if i dont comment lines below, then we can see "Account has deleted" message twise
    //myBankAccount.~BankAccount();
    // yourBankAccount.~BankAccount();

}
