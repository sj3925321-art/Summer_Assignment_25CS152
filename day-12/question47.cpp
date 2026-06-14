#include<bits/stdc++.h>
using namespace std;
int number(int a);
int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        cout<<number(i)<<" ";
    }
    return 0;
}
int number(int a) {
    int x=0,y=1,z;
    if(a==1) {
        return x;
    }
   else if(a==2) {
        return y;
    }
   else {
    for(int i=3; i<=a; i++) {
        z=x+y;
        x=y;
        y=z;
    }
    return y;
}
}