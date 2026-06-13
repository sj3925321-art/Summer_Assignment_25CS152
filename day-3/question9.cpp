#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    for(i=2; i<n; i++) {
        if(n%i==0) {
            cout<<"It is not prime number";
            break;
        }
    }
        cout<<"It is a prime number";

    return 0;
}