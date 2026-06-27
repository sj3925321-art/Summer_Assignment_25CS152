#include<bits/stdc++.h> 
using namespace std;
int main() {
    int r,c,i,j;
    cout<<"Enter the value of size of matrix:";
    cin>>r>>c;
    int arr[r][c];
        cout<<"Enter the of elements in the array:";
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                cin>>arr[i][j];
            }
        }
        if(r!=c) {
            cout<<"It is neither square nor symmetric matrix";
        }
        else{
     for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(arr[i][j]!=arr[j][i]) {
                cout<<"It is not symmetric matrix";
                return 0;
            }
        }
     }
     cout<<"It is symmetric matrix";
            
    }
    return 0;
}