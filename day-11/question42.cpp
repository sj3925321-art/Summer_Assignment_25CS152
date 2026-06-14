#include<bits/stdc++.h>
using namespace std;
void maximum(int a,int b);
int main () {
    int n,m;
    cin>>n>>m;
    maximum(n,m);
    return 0;
}
void maximum(int a,int b) {
    if(a>b) {
        cout<<"a is greater";
    }
    else {
        cout<<"b is greater";
    }
}