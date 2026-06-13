#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,x,count=0;
    cin>>n;
    for(x=n; n != 0; n=n/10) {
        count++;
    }
    cout << count;
    
    return 0;
}