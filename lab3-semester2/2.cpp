//I prefer using this bits/stdc++ libary, because it is easy to use and has many more functions we can use
#include<bits/stdc++.h>
using namespace std;

//next lines are forwarders;
class B;
class A;

//defining class A
class A{
    private:
        int someIntegerInClassA;
    public:
        //this is the just constructor to initiate integer in class
        A(int integer){
            this->someIntegerInClassA = integer;
        }
        void printInteger(){
            cout<<"someIntegerInClassA: "<<this->someIntegerInClassA<<" ";
        }
        //defining friend function
        friend void swapValues(A &a, B &b);
};

//defining class B
class B{
    private:
        int someIntegerInClassB;
    public:
        //this is the just constructor to initiate integer in class
        B(int integer){
            this->someIntegerInClassB = integer;
        }
        void printInteger(){
            cout<<"someIntegerInClassB: "<<this->someIntegerInClassB<<" ";
        }
        //defining friend function
        friend void swapValues(A &a, B &b);
};

//function to swap values of classes
void swapValues(A &a, B &b){
    int temproaryInteger = a.someIntegerInClassA;
    a.someIntegerInClassA = b.someIntegerInClassB;
    b.someIntegerInClassB = temproaryInteger;
}

int main(){
    //main things happen here:
    //defining our classes with initial values
    A a(7);
    B b(77);

    cout<<"Values before swapping:"<<endl;
    a.printInteger();
    b.printInteger();

    //let me swap integers in classes
    swapValues(a,b);

    //alright, now, let me check whether they are swapped or not by printing their values again
    cout<<"\nValues after swapping:"<<endl;
    a.printInteger();
    b.printInteger();

}
