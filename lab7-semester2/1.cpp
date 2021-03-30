//This program worked in first attempt without any kind of errors, which is awesome :)))

//header
#include<iostream>
using namespace std;
//Publication class
class Publication{
    private:
        string title;
        float price;
    public:
        void setData(){
            cout<<"Title: ";
            cin>>title;
            cout<<"Price: ";
            cin>>price;
        }    
        void getData(){
            cout<<"Title: "<<title<<" Price: "<<price<<endl;
        }
};
//Book class that derives Publication class
class Book: public Publication{
    private:
        int pageCount;
    public:
        void setData(){

            cout<<"Page Count: ";
            cin>>pageCount;
        }
        void getData(){
            cout<<"Page count: "<<pageCount<<endl;
        }
};
//Tape class that derives Publication class
class Tape: public Publication{
    private:
        float playingTime;
    public:
        void setData(){
            cout<<"Playing time: ";
            cin>>playingTime;
        }
        void getData(){
            cout<<"Playing time: "<<playingTime<<endl;
        }
};

int main(){
    //main function
    
    //defining our book class that derives Publication class
    Book sariqDevniMinib;
    cout<<"Please enter book details"<<endl;
    //and calling public function in base Class which is Publication class
    sariqDevniMinib.Publication::setData();
    //after that calling setData() function of our Book class
    sariqDevniMinib.setData();
    //defining our tape class that derives Publication class
    Tape otganKunlar;
    cout<<"Please Tape book details"<<endl;
    //and calling public function in base Class which is Publication class
    otganKunlar.Publication::setData();
    //after that calling setData() function of our Tape class
    otganKunlar.setData();

    //printing results to console
    cout<<"\nOur Book:\n";
    sariqDevniMinib.Publication::getData();
    sariqDevniMinib.getData();

    cout<<"\nOur Tape:\n";
    otganKunlar.Publication::getData();
    otganKunlar.getData();
    

}