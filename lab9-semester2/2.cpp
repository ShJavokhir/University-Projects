/*
    This code is written by Javokhir Shomuratov
    U2010257
    Finished at: 21:41 15-april 2021
    Telegram: @shjavohir
    Github: https://github.com/shjavokhir
*/

/*
    This program2 is almost same as program1,
    The only difference is we added Circle class in this program, so we can calculate Circle area as well,
    but problem is that we can not add additional variable called radius for our base Shape class,
    so we use trick here, we use one of our two variables as radius (in our case variable a)
*/

#include <iostream>
using namespace std;

//base class Shape
class Shape
{
protected:
    //two variables that stores length, width for rectangle and base, height for triangle
    //for circle case, we use variable as for radius
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
        else if (shape == "circle")
        {
            cout << "[ Enter circle information ]" << endl;
            cout << "Radius: ";
            cin >> a;
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
//class Circle derives class Shape
class Circle : public Shape
{
public:
    Circle()
    {
        getData("circle");
    }
    void displayArea()
    {
        // pi * r^2
        cout << "Area of circle: " << 3.14 * a * a;
    }
};

int main()
{
    //we need shape variable to store choice of user
    string shape;
    //class Shape as pointer
    Shape *myShape;

    cout << "Enter which shape of area you need (R for rectangle, T for triangle, C for circle): (R/T/C) ";
    cin >> shape;

    //choice validation
    if (shape == "R")
    {
        Rectangle rectangle;
        myShape = &rectangle;
    }
    else if (shape == "T")
    {
        Triangle triangle;
        myShape = &triangle;
    }
    else if (shape == "C")
    {
        Circle circle;
        myShape = &circle;
    }
    else
    {
        cout << "Wrong input";
        return 0;
    }

    //displaying area
    myShape->displayArea();

    system("pause");
    return 0;
}