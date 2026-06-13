#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,remainder,x;
    cin>>n;
    for(x=n; x!=0; x=x/10) {
        remainder=x%10;
    cout<<remainder;

    }
    return 0;
}