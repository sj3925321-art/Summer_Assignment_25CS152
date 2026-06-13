#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,i,x,fac=1,remainder,sum=0;
    cin>>n;
    for(x=n; x!=0; x=x/10) {
        remainder=x%10;
        fac=1;
        for(i=1; i<=remainder; i++) {
        fac=fac*i;
        }
        sum=sum+fac;
}
if(sum==n) {
    cout<<"It is a strong number";
}
else {
cout<<"It is not a strong number";
}

    return 0;
}