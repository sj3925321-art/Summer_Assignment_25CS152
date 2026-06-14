#include<bits/stdc++.h>
using namespace std;
void number(int n);
int main() {
    int a;
    cin>>a;
    number(a);
    return 0;
}
void number(int n) {
    if(n<=1) {
        cout<<"It is not prime number";
        return;
    }
    for(int i=2; i<n; i++) {
        if(n%i==0){
            cout<<"It is not prime number";
            return;
        }
    }
            cout<<"It is a prime number";
}