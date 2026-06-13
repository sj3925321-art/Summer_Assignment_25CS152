#include<bits/stdc++.h>
using namespace std;
int main() {
    char A;
    int n;
    cin>>n;
for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
cout<<char(64+j);
    }
    cout<<"\n";
}
    return 0;
}