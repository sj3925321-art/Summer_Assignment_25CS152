#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,remainder,sum=0;
    cin>>n;
    for(int x=n; x!=0; x=x/2) {
        remainder=x%2;
        sum=sum+remainder;
    }
    cout<<sum;
    return 0;
}