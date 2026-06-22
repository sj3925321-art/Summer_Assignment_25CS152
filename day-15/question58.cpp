#include<bits/stdc++.h> 
using namespace std;
int main() {
    int n,temp;
    cout<<"Enter the value of n:"; 
    cin>>n;
    int arr[6]={32,54,86,66,72,63};
    temp=arr[0];
    for(int i=0; i<n; i++) {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
