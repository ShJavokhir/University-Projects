#include<bits/stdc++.h>
#include "Triangle.h";
using namespace std;

//So thses four functions below are implementations of some functions in Triangle.h
Triangle::Triangle(double height=0, double base=0){
    this->base = base;
    this->height = height;
    cout<<"Triangle was initialized with height="<<height<<" and base="<<base<<endl;
}
Triangle::~Triangle(){
    cout<<"Triangle object was destroyed !"<<endl;
}
double Triangle::getArea(){
    return this->height*this->base/2;
}
double Triangle::getPerimeter(){
    // I am not very good at math, i hope expression below is correct mathematically :)
    return this->height*2 + this->base;
}

int main(){
    //let me ask user to enter triangle values
    double height, base;
    cout<<"Please enter triangle values"<<endl;
    cout<<"Height: ";
    cin>>height;
    cout<<"Base: ";
    cin>>base;

    Triangle myTriangle(height, base);

    cout<<"Area of triangle: "<<myTriangle.getArea()<<endl;
    cout<<"Perimeter of triangle: "<<myTriangle.getPerimeter()<<endl;

    //let me destroy our object
    //again i commented line below, because my compiler deletes object itself
    //myTriangle.~Triangle();
}
