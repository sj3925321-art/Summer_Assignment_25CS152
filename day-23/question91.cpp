#include<bits/stdc++.h>
using namespace std;
int main() {
    char temp;
    string s1;
    cout<<"Enter your first string:";
    getline(cin,s1);
     string s2;
    cout<<"Enter your second string:";
    getline(cin,s2);
    for(int i=0; i<s1.length()-1; i++) {
        for(int j=i+1; j<s1.length(); j++) {
        if(s1[i]>s1[j]) {
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
        }
        }
        }
        for(int i=0; i<s2.length()-1; i++) {
        for(int j=i+1; j<s2.length(); j++) {
        if(s2[i]>s2[j]) {
        temp=s2[i];
        s2[i]=s2[j];
        s2[j]=temp;
        }
        }
        }
        if(s1==s2) {
            cout<<"anagram strings";
        }
        else {
            cout<<"Not anagram strings";
        }
    return 0;
}