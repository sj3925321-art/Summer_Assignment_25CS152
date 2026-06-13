#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    for(i=2; i<=n; i++) {
        int flag=1;
for(j=2; j<i; j++) {

    if(i%j==0) 
    {
        flag=0;
        break;
    }
}
if(flag==1) {

cout<<i<<"\n";
    }
    }
     return 0;
}