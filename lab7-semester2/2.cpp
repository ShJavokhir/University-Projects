#include<iostream>

using namespace std;

class Account{
    private:
        string customerName;
        int accountNumber;
        string accountType;
    public:
        void getAccountInfo(){
            cout<<"Please type some account info:"<<endl;
            cout<<"Customer name: ";
            cin>>customerName;
            cout<<"Account number: ";
            cin>>accountNumber;
            
        }
        void printAccountInfo(){
            cout<<"Account information:"<<endl;
            cout<<"Customer name: "<<customerName<<endl;
            cout<<"Account number: "<<accountNumber<<endl;
            string tempAccountType = accountType=="C"?"Current":"Saving";
            cout<<"Account type: "<<tempAccountType<<endl;
        }
        void setAccountType(string accountType){
            this->accountType = accountType;
        }
        string getAccountType(){
            return this->accountType;
        }
};

class CurrentAccount: public Account{
    private:
        const float penaltyAmount = 2;
        const float minimumBalance = 100.0;
        float amount;
    public:
        void printCurrentAccountRequirements(){
            cout<<"\"Current\" type of account requirements:"<<endl;
            cout<<"Minimum balance of account: "<<minimumBalance<<endl;
            cout<<"Penalty amount for being less than minimum balance in the account: "<<minimumBalance<<endl;
        }
        void desposit(){
            float depositedAmount;
            cout<<"Enter the amount of deposit: ";
            cin>>depositedAmount;
            amount += depositedAmount;
            cout<<"Succesfully deposited"<<endl;
            
        }
        void balance(){
            cout<<"Balance of account: "<<amount<<endl;
        }
        void withdraw(){
            float withdrawedAmount;
            cout<<"Enter the amount of withdraw: ";
            cin>>withdrawedAmount;
            if(withdrawedAmount > amount){
                cout<<"You have no enough money to withdraw"<<endl;
            }else{
                amount -= withdrawedAmount;
                cout<<"Succesfully withdrawed"<<endl;
                penalty();
            }
        }
        void penalty(){
            if(amount < minimumBalance){
                amount -= penaltyAmount;
                cout<<"Account penaltied of 2 USD for being less than 100$ in account"<<endl;
            }
        }
};
class SavingAccount: public CurrentAccount{
    private:
        float amount;
    public:
        void desposit(){
            float depositedAmount;
            cout<<"Enter the amount of deposit: ";
            cin>>depositedAmount;
            amount += depositedAmount;
            cout<<"Succesfully deposited"<<endl;
        }
        void balance(){
            cout<<"Balance of account: "<<amount<<endl;
        }
        void withdraw(){
            float withdrawedAmount;
            cout<<"Enter the amount of withdraw: ";
            cin>>withdrawedAmount;
            if(withdrawedAmount > amount){
                cout<<"You have no enough money to withdraw"<<endl;
            }else{
                amount -= withdrawedAmount;
                cout<<"Succesfully withdrawed"<<endl;
            }
        }
        void computeInterest(){
            float tempDeposit;
            int tempYears;
            cout<<"Calculating interest (ROI is 4% per year):"<<endl;
            cout<<"Enter amount of deposit: ";
            cin>>tempDeposit;
            cout<<"Enter years: ";
            cin>>tempYears;
            cout<<"Interest after "<<tempYears<<" is: "<<(tempDeposit * (1 + tempYears * 4))<<endl;
        
        }
};

int main(){
    cout<<2;
    SavingAccount a;
    int menuChoice = 0;
    cout<<"Please type the asked information in order to create new bank account"<<endl;
    cout<<"Account type (write S for saving account or C for current account): ";
    string accountType;
    cin>>accountType;
    
    if(accountType == "C"){
        a.setAccountType("C");
    }else if(accountType == "S"){
        a.setAccountType("S");
    }
    //get account information from console
    a.getAccountInfo();
    //clear screen
    system("clear");

    if(accountType == "C"){
        //show menu for "Current" account type
        while(!false){
            cout<<"<----- MENU ----->"<<endl;
            cout<<"[1] Make deposit"<<endl;
            cout<<"[2] Display balance"<<endl;
            cout<<"[3] Withdraw money"<<endl;
            cout<<"[4] Account requirements"<<endl;
            cout<<"[5] Exit"<<endl<<endl;
            cout<<"Type the menu number: ";
            cin>>menuChoice;

            switch (menuChoice)
            {
            case 1:
                a.CurrentAccount::desposit();
                break;
            case 2:
                a.CurrentAccount::balance();
                break;
            case 3:
                a.CurrentAccount::withdraw();
                break;
            case 4:
                a.CurrentAccount::printCurrentAccountRequirements();
                break;
            case 5:
                return 555;
                break;
            default:
                cout<<"Incorrect menu number"<<endl;
                break;
            }
            system("pause"); 
            
            system("cls"); 
            
        }
    }else if(accountType == "S"){
        //show menu for "Saving" account type
        while(!false){
            cout<<"<----- MENU ----->"<<endl;
            cout<<"[1] Make deposit"<<endl;
            cout<<"[2] Display balance"<<endl;
            cout<<"[3] Compute and deposit interest"<<endl;
            cout<<"[4] Withdraw money"<<endl;
            cout<<"[5] Exit"<<endl<<endl;
            cout<<"Type the menu number: ";
            cin>>menuChoice;
            switch (menuChoice)
            {
            case 1:
                a.desposit();
                break;
            case 2:
                a.balance();
                break;
            case 3:
                a.computeInterest();
                break;
            case 4:
                a.withdraw();
                break;
            case 5:
                return 555;
                break;
            default:
                cout<<"Incorrect menu number"<<endl;
                break;
            }
            system("pause");
            
            system("cls"); 
            
        }
        
    }
}
