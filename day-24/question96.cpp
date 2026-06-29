#include<bits/stdc++.h>
using namespace std;
int main() {
    string ch="";
    string s;
    cout<<"Enter your string:";
    getline(cin,s);
    for(int i=0; i<s.length(); i++) {
    bool duplicate=false;
    for(int k=0; k<i; k++) {
        if(s[i]==s[k]) {
            duplicate=true;
            break;
        }
    }
        if(duplicate==false) {
    ch=ch+s[i];
        }
    }
    cout<<"After removing duplicate character is:"<<ch;
    return 0;
}