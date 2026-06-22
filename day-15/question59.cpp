#include<bits/stdc++.h> 
using namespace std;
int main() {
    int temp;
    int arr[6]={32,54,86,66,72,63};
    temp=arr[5];
    for(int i=5; i>=0; i--) {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0; i<6; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
