#include<bits/stdc++.h> 
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of elments in array:";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int j=n-1; j>=0; j--) {
        cout<<arr[j]<<"\n";
    }
    return 0;
}