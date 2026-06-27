#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h> 
using namespace std;
int main() {
    int r,c;
    cout<<"Enter the value of size of matrix:";
    cin>>r>>c;
    int arr[r][c];
        cout<<"Enter the of elements in the matrix:";
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<r; i++) {
            int sum=0;
            for(int j=0; j<c; j++) {
                sum=sum+arr[i][j];
            }
            cout<<"Sum of "<<i <<"th row is:"<<sum;
            cout<<"\n";
        }
        return 0;
    }