#include<iostream> //header file
using namespace std; //suprocessor
//recursive function to find nth fibonacci number
int Fib(int n){
    if(n == 1) return 1;
    if(n == 2) return 1;
    return Fib(n-2) + Fib(n-1);

}
int main(){
    int n;
    //asking for n
    cout<<"Enter n: ";
    //getting n
    cin>>n;
    cout<<"n series of fibbonaci are: "<<endl;
    //looping from 1 to n and print every i'th fibonacci number
    for(int i=1; i<=n; i++){
            cout<<Fib(i)<<" ";
    }
}
