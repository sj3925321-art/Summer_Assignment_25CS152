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
    int remainder,armstrong=0,digitcount=0;
    for(int x=a; x!=0; x=x/10) {
        remainder=x%10;
        digitcount++;
    }
    for(int x=a; x!=0; x=x/10) {
        remainder=x%10;
        armstrong=armstrong+round(pow(remainder,digitcount));
    }
    if(armstrong==a) {
        cout<<"It is armstrong";
        return;
    }
    else {
        cout<<"It is not armstrong";
        return;
    }
}