#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=5;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            cout<<" ";
        }
        for(int k=0; k<i+1; k++) {
            cout<<char(65+k);
        }
        for(int l=0; l<i; l++) {
            cout<<char(64+(i-l));
        }
        cout<<"\n";
    }
    return 0;
}