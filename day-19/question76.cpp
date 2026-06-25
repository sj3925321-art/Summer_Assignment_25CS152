#include<bits/stdc++.h>
using namespace std;
int main() {
    int r,c,sum=0;
    cout<<"Enter the value of r and c:";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the value of elements:";
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<r; i++) {
        for(int j=i; j<=i; j++) {
            sum=sum+arr[i][j];
        }
    }
    cout<<"The sum of diagonal elements is:"<<sum;

    return 0;
}