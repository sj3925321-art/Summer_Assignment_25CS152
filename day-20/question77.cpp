#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n,p,q;
    cout<<"Enter the values of m and n in 1st matrix:";
    cin>>m>>n;
    cout<<"Enter the values of p and q in 2nd matrix:";
    cin>>p>>q;
    int arr[m][n];
    int brr[p][q];
    int res[m][q];
    if(n!=p) {
        cout<<"Both matrices can not be multiplied";
    }
    else {
    cout<<"enter the value of 1st matrix:";
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }
        cout<<"enter the value of 2nd matrix:";
    for(int i=0; i<p; i++) {
        for(int j=0; j<q; j++) {
            cin>>brr[i][j];
        }
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<q; j++) {
            res[i][j]=0;
            for(int k=0; k<n; k++) {   //n takes because loop will end at the last column of 1st matrix and last rows of 2nd matrix.
                // which is n and p.
                res[i][j]=res[i][j]+arr[i][k]*brr[k][j];
        }
    }
}
for(int i=0; i<m; i++) {
    for(int j=0; j<q; j++) {
cout<<res[i][j]<<" ";
    }
cout<<"\n";
    }
}
    return 0;
}