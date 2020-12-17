#include <iostream> //header file
using namespace std; // suprocessor
//gcd function to find greatest common divisor
//this algorith is by euclid
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
//main function
int main() {
   int a,b;
   cout<<"Enter a and b: "<<endl;
   //getting input from console
   cin>>a>>b;

   cout<<"GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b);

}
