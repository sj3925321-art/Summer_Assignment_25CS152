#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of elements in the array:";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        bool found=false;
        for(int j=0; j<i; j++) {
            if(arr[i]==arr[j]) {
                found=true;
                break;
            }
        }
    if(found==false) {
        cout<<arr[i]<<" ";
    }
}
    return 0;
}