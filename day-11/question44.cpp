#include<bits/stdc++.h>
using namespace std;
int number(int n);
int main() {
    int a;
    cin>>a;
    cout<<number(a);
    
    return 0;
}
int number(int n) {
    if(n==0 || n==1) {
        return 1;
    }
    int factorial=1;
    for(int i=1; i<=n; i++) {
      factorial=factorial*i;
    }
    return factorial;
}