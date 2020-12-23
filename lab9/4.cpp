#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++) cin>>a[i];

    int valueToAdd;
    int positionThatThatWillBeAddetAt;
    cout<<"Enter the value you want to add in arrray: ";
    cin>>valueToAdd;
    cout<<"Enter the position that your value will be inserted at: ";
    cin>>positionThatThatWillBeAddetAt;
    a[positionThatThatWillBeAddetAt] = valueToAdd;

    cout<<"Values after insertion: ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";


}
