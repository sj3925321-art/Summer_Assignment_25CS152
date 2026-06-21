#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0,flag=0;
    int x=6;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of all element:";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        if(arr[i]==x) {
            flag=1;
            count++;
        }
    }
    cout<<"frequency is:"<<count<<"\n";
    if(flag==0) {
        cout<<"Element is not found";
    }

        return 0;
    }