#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,rem,i;
    cin>>n;
    if(n==0) {
        cout<<n;
    }
        else {
        int arr[32];
        i=0;
for(int x=n; x!=0; x=x/2) {
    rem=x%2;
    arr[i]=rem;
    i++;
}
for(int j=i-1; j>=0; j--) {
    cout<<arr[j];
}
  }
    return 0;
}