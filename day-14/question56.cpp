#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of all element:";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int largest=arr[0],smallest=arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]>largest) {
            largest=arr[i];
        }
    }
        cout<<"The largest is elment in the array is:"<<largest<<"\n";
        for(int i=0; i<n; i++) {
            if(smallest>arr[i]) {
                smallest=arr[i];
            }
        }
        cout<<"The smallest is element in the array is:"<<smallest;
        return 0;
    }
