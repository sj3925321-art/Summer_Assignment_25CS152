#include<bits/stdc++.h> 
using namespace std;
int main() {
    int j=0;
    int arr[10]={32,54,0,86,13,0,87,54,0,7};
    for(int i=0; i<10; i++) {
        if(arr[i]!=0) {
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=j; i<10; i++) {
        arr[i]=0;
    }
    for(int i=0; i<10; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
