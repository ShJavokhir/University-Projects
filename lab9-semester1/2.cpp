
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
    int sum = 0;//for sum of array elements
    for(int i=0;i<n;i++) sum+=a[i];
    cout<<"Avarage of array is equal to: "<<sum/(n*1.0);

}
