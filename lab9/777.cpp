#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,ustun, mx;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
                cin>>a[i][j];
        }
    }
    mx =  a[0][0];
    ustun = 0;

    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            if(a[i][j] < mx){
                mx = a[i][j];
                ustun = j;
            }
        }
    }
    cout<<mx << " "<< ustun;

}
