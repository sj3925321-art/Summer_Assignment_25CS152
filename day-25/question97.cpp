#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    int arr[4]={1,4,6,8};
    int brr[4]={2,3,5,7};
    int crr[n];
    for(int i=0; i<3; i++) {
        for(int j=i+1; j<4; j++) {
            if(arr[i]>arr[j]) {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=i+1; j<4; j++) {
            if(brr[i]>brr[j]) {
                swap(brr[i],brr[j]);
            }
        }
    }
    for(int i=0; i<4; i++) {
        crr[n]=arr[i];
        n++;
    }
 for(int i=0; i<4; i++) {
        crr[n]=brr[i];
        n++;
    }
    cout<<"merge array:";
    for(int i=0; i<7; i++) { 
        for(int j=i+1; j<8; j++) {
            if(crr[i]>crr[j]) {
                swap(crr[i],crr[j]);
            }
        }
        cout<<crr[i]<<" ";
    }
    return 0;
}