#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,remainder,x,reverse=0;
    cin>>n;
    for(x=n; x!=0; x=x/10) {
        remainder=x%10;
   reverse=reverse*10+remainder;
    }
    if(n==reverse) {
        cout<<"It is is palindrome";
    }
    else
    cout<<"It is not palindrome";
    
    return 0;
}