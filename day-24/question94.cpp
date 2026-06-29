#include<bits/stdc++.h>
using namespace std;
int main() {
    int max;
    string s1;
    cout<<"Enter your string:";
    getline(cin,s1);
    for(int i=0; i<s1.length(); i++) {
        bool repeat=false;
    for(int k=0; k<i; k++) {
        if(s1[i]==s1[k]) {
            repeat=true;
            break;
        }
        }
        if(repeat)
        continue;
        int count=1;
        for(int j=i+1; j<s1.length(); j++) {
        if(s1[i]==s1[j]) {
            count++;
        }       
        }
        cout<<s1[i]<<count;
    }
    return 0;
}