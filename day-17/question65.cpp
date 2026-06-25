#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    int arr[]={1,2,3};
    int brr[]={4,5,6};
    int crr[n];
    for(int i=0; i<3; i++) {
        crr[n]=arr[i];
        n++;
    }
    for(int i=0; i<3; i++) {
        crr[n]=brr[i];
        n++;
    }
    cout<<"merge array:";
    for(int i=0; i<6; i++) {
        cout<<crr[i]<<" ";
    }
    return 0;
}