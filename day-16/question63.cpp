#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    bool present=false;
    int sum=15;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of elements in the array:";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]+arr[j]==sum) {
                present=true;
                cout<<arr[i]<<" ";
                cout<<arr[j];
            }
        }
        cout<<"\n";
    }
    if(present==false) {
        cout<<"No pairs found";
    }
    return 0;
}