/*
    This code is written by Javokhir Shomuratov
    U2010257
    Finished at: 21:41 15-april 2021
    Telegram: @shjavohir
    Github: https://github.com/shjavokhir
*/

#include <iostream>
using namespace std;

//base class Shape 
class Shape
{
protected:
    //two variables that stores length, width for rectangle and base, height for triangle 
    int a, b;

public:
    //function to get data from user input (console)
    //this function gets shape type as argument, so function presents interactive input for different shapes
    void getData(string shape)
    {
        if (shape == "rectangle")
        {
            cout << "[ Enter rectangle information ]" << endl;
            cout << "Length: ";
            cin >> a;
            cout << "Width: ";
            cin >> b;
        }
        else if (shape == "triangle")
        {
            cout << "[ Enter triangle information ]" << endl;
            cout << "Base: ";
            cin >> a;
            cout << "Height: ";
            cin >> b;
        }
    }
    //virtual function, so we can override this function from child classes at runtime
    virtual void displayArea(){};
};
//class Rectangle derives class Shape
class Rectangle : public Shape
{
public:
    Rectangle()
    {
        //passes "rectangle" as argument, so input will be asked for rectangle
        getData("rectangle");
    }
    void displayArea()
    {
        // length * width
        cout << "Area of rectangle: " << a * b << endl;
    }
};
//class Triangle derives class Shape
class Triangle : public Shape
{
public:
    Triangle()
    {
        getData("triangle");
    }
    void displayArea()
    {
        //base * height / 2
        cout << "Area of triangle: " << a * b / 2.0 << endl;
    }
};

int main()
{
    //we need shape variable to store choice of user
    string shape;
    //class Shape as pointer
    Shape* myShape;

    cout<<"Enter which shape of area you need (R for rectangle, T for triangle): (R/T) ";
    cin>>shape;
    
    //choice validation
    if(shape == "R"){
        Rectangle rectangle;
        myShape =  &rectangle;
    }else if(shape == "T"){
        Triangle triangle;
        myShape =  &triangle;
    }else{
        cout<<"Wrong input";
    }

    //displaying area
    myShape->displayArea();

    system("pause");
    return 0;
}