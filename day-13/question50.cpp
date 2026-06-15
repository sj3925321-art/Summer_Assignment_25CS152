#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,sum=0;
    float average;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        sum=sum+arr[i];
    }
    average=(float)sum/n;
    cout<<"Sum:"<<sum;
    cout<<"Average:"<<average;
}