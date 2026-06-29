#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int maximum=0;
    char store;
    cout<<"Enter your string:";
    getline(cin,str);
    for(int i=0; i<str.length(); i++) {
        int count=0;
        for(int j=0; j<str.length(); j++) {
           if(str[i]==str[j]) {
           count++;
        }
    }
    if(count>maximum) {
        maximum=count;
        store=str[i];
    }
        cout<<"Maximum ocurring character is:"<<store;
}
    return 0;
}