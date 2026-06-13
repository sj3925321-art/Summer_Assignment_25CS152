#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,x,count=0,sum=0,remainder;
    cin>>n;
    for(int i=0; n!=0; i++) {
        
        remainder=n%10;
        sum=sum+remainder*pow(2,i);
        n=n/10;
    }
    cout<<sum;
    return 0;
}
