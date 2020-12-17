#include<iostream> //header file
using namespace std; //suprocessor

//Just a reqursive function to calculate x^y
int power(int x, int y){
    //if y equals to 1 then return x
    if(y == 1) return x;

    return x * power(x, y-1);
}
// naub fybctuib
int main(){
    //x and y variables are defined as integer
    int x,y;
    //ask user for input
    cout<<"Enter x and y values:"<<endl;
    //getting values from cnosole
    cin>>x>>y;
    //printing answer
    cout<<"x^y is equal to: "<<power(x, y);

}
