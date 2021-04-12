#include<iostream>
using namespace std;
int main(){
    int n; //num of array elements
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];//defining array with type of integer
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"These are array elements: ";
    for(int i=0;i<n;i++){ //printing array elements
        cout<<a[i]<<" ";
    }

}
