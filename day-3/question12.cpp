#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,i,n;
    cin>>a>>b;
    for(i=1; i<=a && i<=b; i++) {
        if(a%i==0 && b%i==0) {
            n=i;
        }
    }
    int lcm=(a*b)/n;
    cout<<lcm<<"\n";

    return 0;
}