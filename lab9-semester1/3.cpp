#include<iostream>
using namespace std;

int main(){

    //this are fixed arrays, you can add elements to them manually;
    int lengthOfA = 5;
    int lengthOfB = 6;
    int a[5] = {5,7,9,15,20};
    int b[6] = {1,6,12,13,18,27};
    int answer[lengthOfA + lengthOfB];

    int i = 0, j = 0, k = 0;
    //this is the alogrithm I used to marge two sorted array and get sorted array as answer
    while (i < lengthOfA && j < lengthOfB)
       answer[k++] = a[i] < b[j] ? a[i++] :  b[j++];

    while (i < lengthOfA)
        answer[k++] = a[i++];

    while (j < lengthOfB)
        answer[k++] = b[j++];
    cout<<"Merged sorted array:";
    for(int i=0;i<lengthOfA+lengthOfB; i++){
        cout<<answer[i]<<" ";
    }
}
