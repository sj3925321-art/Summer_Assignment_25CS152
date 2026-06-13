#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,i,largest=0;
    cin>>n;
    for(i=2; i<=n; i++) {
        if(n%i==0) {
            int prime=true;
            for(int j=2; j<i; j++) {
                if(i%j==0) {
                    prime=false;
                    break;
                }
            }
            if (prime) {
               largest=i;
            }
        }
    }
    cout<<largest;
    return 0;
}