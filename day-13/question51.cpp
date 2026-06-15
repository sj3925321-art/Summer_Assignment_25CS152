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
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
        if(arr[i]<min) {
            min=arr[i];
        }
    }
        cout<<"maximum value is:"<<max<<"\n";
        cout<<"minimum value is:"<<min;
    return 0;
}