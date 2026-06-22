#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,maxfrequency=0,element;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of elements in the array:";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        int count=1;
        for(int j=i+1; j<n; j++) {
            if(arr[i]==arr[j]) {
                count++;
                element=arr[i];
            }
        }
        if(count>maxfrequency) {
            maxfrequency=count;
        }
    }
        cout<<"Maximum frequency is:"<<maxfrequency<<"\n";
        cout<<"The element whose maximum frequency is:"<<element;

    return 0;
}