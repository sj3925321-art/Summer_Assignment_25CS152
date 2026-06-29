#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout<<"Enter your string:";
    getline(cin,str);
    for(int i=0; i<str.length(); i++) {
        int count=0;
        for(int j=0; j<str.length(); j++) {
           if(str[i]==str[j]) {
           count++;
        }
    }
    if(count>1) {
        cout<<"First repeating character is:"<<str[i];
        break;
    }
}
    return 0;
}