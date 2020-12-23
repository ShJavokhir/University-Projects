#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++) cin>>a[i];

    int positionToDelete;
    cout<<"Enter the position at which index element to delete: ";
    cin>>positionToDelete;
    //main deletion part
    for(int i=positionToDelete;i<n-1;i++)
        a[i] = a[i+1];
    //number of array elements will be decreased after deletion
    n--;

    cout<<"Values after deletion: ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";


}
