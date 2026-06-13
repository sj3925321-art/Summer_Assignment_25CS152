#include<bits/stdc++.h>
using namespace std;
int main () {
    int i,n,a=0,b=1,c;
    cin>>n;
    if(n>=1)
    cout<<a<<"\n";
if(n>=2)
cout<<b<<"\n";
    for(i=0; i<n-2; i++) {
        c=a+b;
        a=b;
        b=c;
    cout<<c<<"\n";
    }
    return 0;
}