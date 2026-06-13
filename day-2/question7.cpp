#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,product=1,remainder,x;
    cin>>n;
    for(int x=n; x!=0; x=x/10) {
        remainder=x%10;
        product=product*remainder;
    }
    cout<<product;


    return 0;
}