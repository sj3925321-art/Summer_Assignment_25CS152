#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,n,factorial=1;
    cin>>n;
    for(i=1;i<=n;i++) {
        factorial = i * factorial;
    }

    cout << factorial;
    return 0;
}