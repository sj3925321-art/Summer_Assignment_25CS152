#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,sum=0,remainder,x;
    cin>>n;
    for( x=n; x!=0; x=x/10) {
        remainder=x%10;
        sum=sum+remainder;
    }
        cout<<sum;
   
    return 0;
}