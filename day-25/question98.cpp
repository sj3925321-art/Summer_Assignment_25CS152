#include<bits/stdc++.h>
using namespace std;
int main() {
    string n1;
    cout<<"Enter your 1st name:";
    getline(cin,n1);
    string s2;
    cout<<"Enter your 2nd string:";
    getline(cin,s2);
    for(int i=0; i<s1.length(); i++) {
        for(int j=0; j<s2.length(); j++) {
            if(s1[i]==s2[j]) {
                cout<<s1[i]<<" ";
                break;
            }
        }
    }
    return 0;
}