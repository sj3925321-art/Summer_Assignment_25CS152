#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    string ch="";//This is current word.
    string longest="";//This is longest word.
    cout<<"Enter your first string:";
    getline(cin,s);
    s=s+" ";
    for(int i=0; i<s.length(); i++) {
        if(s[i]!=' ') {
            ch=ch+s[i];
        }
       else {
         if(ch.length()>longest.length()) {
            longest=ch;
         }
         ch="";
       }
    }
    cout<<"Longest word is:"<<longest;
    return 0;
}