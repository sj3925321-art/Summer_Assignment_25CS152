#include<bits/stdc++.h> 
using namespace std; 
int main() {
    int n,temp;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of elments in the array:";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++) {
        int minimum=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[minimum]) {
                minimum=j;
            }
        }
                temp=arr[i];
                arr[i]=arr[minimum];
                arr[minimum]=temp;
    }
    cout<<"Shorted array are:";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}