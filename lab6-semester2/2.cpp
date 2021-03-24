#include<iostream>
using namespace std;
//defining Distance class
class Distance{
    private:
        //private members
        int kilometer, meter;
    public:
        //default constructor
        Distance(){};
        //parametric constructor
        Distance(int kilometer, int meter){
            this->kilometer = kilometer + (meter / 1000);
            this->meter = meter % 1000;
        }
        //setters
        void setKilometer(int kilometer){
            this->kilometer = kilometer;
        }
        void setMeter(int meter){
            this->kilometer = this->kilometer +  (meter / 1000);
            this->meter = meter % 1000;
        }
        //function to show distance 
        void showDistance(){
            cout<<"Kilometer: "<<kilometer<<" Meter: "<<meter<<endl;
        }
        //overloading (==) operator to show difference of two Distance objects
        void operator ==(Distance comparedDistance){
            //some confusing logic here..... :/
            
            //first i converted distance completely to meters;
            int dist1inMeters = kilometer * 1000 + meter;
            int dist2inMeters = comparedDistance.kilometer * 1000 + comparedDistance.meter;
            //then found difference of two distance in meters;
            int differenceInMeters = abs(dist1inMeters - dist2inMeters);
            //then printed in normal format
            cout<<"Difference: "<<differenceInMeters/1000<<" kilometers and "<<differenceInMeters%1000<<" meters";            
        }
};

int main(){
    //initializing first distance object;
    Distance dist1(15, 1200);
    dist1.showDistance();
    //initializing second distance object
    Distance dist2;
    dist2.setKilometer(12);
    dist2.setMeter(1900);
    dist2.showDistance();
    //showing difference of two distances
    dist1==dist2;
}