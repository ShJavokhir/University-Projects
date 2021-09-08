#include<iostream>
using namespace std;
//defining Dollar class
class Dollar{
    private:
        float currency, mktrate, offrate;
    public:
        
        float getDollar(){
            return this->currency;
        }
        float getMarketSoums(){
            return this->currency * mktrate;
        }
        float getOfficialSoums(){
            return this->currency * offrate;
        }
        void setRates(){
            cout<<"Enter official rate: "; cin>>offrate;
            cout<<"Enter market rate:: "; cin>>mktrate;
            
        }
        //overloading << operator
        void operator <<(float currency){
            this->currency = currency;
            cout<<"Currency: "<<this->getDollar()<<endl;
            cout<<"Market soums: "<<this->getMarketSoums()<<endl;
            cout<<"Official soums: "<<this->getOfficialSoums()<<endl;
    
        }

};
int main(){
    float currency;
    cout<<"Enter currency: ";
    cin>>currency;

    //initialization object of Dollar class
    Dollar myDollar;
    //getting rates from console
    myDollar.setRates();
    cout<<endl;
    //showing currency info
    myDollar<<currency;

}