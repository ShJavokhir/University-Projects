#include<iostream> //header file
using namespace std; //suprocessor
//recursive function to find sum of numbers until n
int sumOfNumbersUntil(int n){
    if(n == 1) return 1;
    return n + sumOfNumbersUntil(n-1);
}
//main function
int main(){
    //n defined as integer type
    int n;
    //asking for input
    cout<<"Enter n: ";
    //getting n from  console
    cin>>n;
    //printing answer
    cout<<"Sum of numbers 1+2.....+n = "<<sumOfNumbersUntil(n);
}
