#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"\n";
    }
    return 0;
}