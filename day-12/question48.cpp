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
    int remainder,sum=0;
    for(int i=1; i<a; i++) {
        remainder=a%i;
        if(remainder==0) {
            sum=sum+i;
        }
    }
    if(sum==a) {
        cout<<"It is a perfect number";
        return;
    }
    else {
    cout<<"It is not a perfect number";
    return;
    }
}