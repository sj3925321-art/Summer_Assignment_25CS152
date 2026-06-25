#include<bits/stdc++.h>
using namespace std;
int main() {
    int r,c;
    cout<<"Enter the values of r and c:";
    cin>>r>>c;
    int arr[r][c];
    int brr[r][c];
    int sum[r][c];
    cout<<"enter the value of 1st matrix";
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin>>arr[i][j];
        }
    }
        cout<<"enter the value of 2nd matrix";
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin>>brr[i][j];
        }
    }
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            sum[i][j]=arr[i][j]+brr[i][j];
        }
    }
         for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cout<<sum[i][j]<<" ";
    }
    cout<<"\n";
}
    return 0;
}