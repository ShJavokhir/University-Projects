#include<iostream>
using namespace std;

class Rectangle{
    private:
        double length, breadth;
    public:
        Rectangle(double length, double breadth){
            this->length = length;
            this->breadth = breadth;
        }
        double getArea(){
            return this->length * this->breadth;
        }
        void setLength(double length){
            this->length = length;
        }
        void setBreadth(double breadth){
            this->breadth = breadth;
        }
        Rectangle operator +(Rectangle addedRectangle){
            return Rectangle(this->length + addedRectangle.length, this->breadth + addedRectangle.breadth);
        }

};

int main(){
    Rectangle rect1(7,8);
    cout<<"Area of rectangle 1: "<<rect1.getArea()<<endl;

    Rectangle rect2(10,20);
    cout<<"Area of rectangle 2: "<<rect2.getArea()<<endl;;
    
    Rectangle rect3 = rect1 + rect2;
    cout<<"Area of rectangle 3 which is addition of two rectangles: "<<rect3.getArea()<<endl;;

    return 0;
}