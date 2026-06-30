#include<bits/stdc++.h> 
using namespace std;
int main() {
    int n;
    cout<<"Enter your age:";
    cin>>n;
    if(n>=18) {
        cout<<"You are eligible for vote"<<"\n";
    }
    else {
        cout<<"You are not eligible for vote";
    }
    return 0;
}