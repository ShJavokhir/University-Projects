#include<iostream>
using namespace std;
int main(){
    string s4[10];
    int i=1;
    s4[i] = "a";
    if(s4[i] != "male" && s4[i] != "female" && s4[i] != "Male" && s4[i] != "Female" && s4[i] != "MALE" && s4[i] != "FEMALE")
                {
                    cout << "=============================" << endl;
                    cout << "Invalid input" << endl << "Input gender again (male or female): ";
                    cin >> s4[i];
                    cout << "=============================" << endl;
                }
}