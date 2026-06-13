#include<bits/stdc++.h>
using namespace std;
int main () {
    int i,n,x,count=0,remainder,armstrong=0;
    cin>>n;
    for(x=n; x!=0; x=x/10) {
        remainder=x%10;
        count++;
    }
    for(x=n; x!=0; x=x/10) {
        remainder=x%10;
        armstrong=armstrong+round(pow(remainder,count));
    }
if(armstrong==n) {
    cout<<"It is armstrong number";
}
else {
cout<<"It is not armstrong number";
}

    return 0;
}