#include<bits/stdc++.h>
using namespace std;
void number(int a);
int main() {
    int n;
    cin>>n;
    number(n);
    return 0;
}
void number(int a) {
    int remainder,reverse=0;
    for(int x=a; x!=0; x=x/10) {
        remainder=x%10;
        reverse=reverse*10+remainder;
    }
    if(a==reverse) {
        cout<<"Palindrome";
        return;
    }
    else {
        cout<<"Not Palindrome";
        return;
    }
}