#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,even=0,odd=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        if(arr[i]%2==0) {
            even++;
        }
        if(arr[i]%2!=0) {
            odd++;
        }
    }
    cout<<"Total even elements is:"<<even<<"\n";
    cout<<"Total odd elements is:"<<odd;
    return 0;
}
