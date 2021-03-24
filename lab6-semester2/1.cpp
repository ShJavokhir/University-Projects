#include<iostream>
using namespace std;

//defining Rectangle class
class Rectangle{
    private:
        //private members
        double length, breadth;
    public:
        //public members
        //default constructor
        Rectangle(){};
        //parametric constructor
        Rectangle(double length, double breadth){
            this->length = length;
            this->breadth = breadth;
        }
        //get area function
        double getArea(){
            return this->length * this->breadth;
        }
        //setters
        void setLength(double length){
            this->length = length;
        }
        void setBreadth(double breadth){
            this->breadth = breadth;
        }
        //overloading (+) operator
        Rectangle operator +(Rectangle addedRectangle){
            //returning new Rectangle object
            return Rectangle(this->length + addedRectangle.length, this->breadth + addedRectangle.breadth);
        }

};
//main class
int main(){
    //initializing rectangles
    Rectangle rect1(7,8);
    cout<<"Area of rectangle 1: "<<rect1.getArea()<<endl;

    Rectangle rect2;
    rect2.setBreadth(10);
    rect2.setLength(20);

    cout<<"Area of rectangle 2: "<<rect2.getArea()<<endl;;
    
    //using our overloaded function to add two rectangles and get new one;
    Rectangle rect3 = rect1 + rect2;
    cout<<"Area of rectangle 3 which is addition of two rectangles: "<<rect3.getArea()<<endl;;

    return 0;
}