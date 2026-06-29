#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1;
    cout<<"Enter your first string:";
    getline(cin,s1);
     string s2;
    cout<<"Enter your second string:";
    getline(cin,s2);
    s1=s1.append(s1);
    if(s1.find(s2)!=string::npos) {
        cout<<"Rotation";
    }
    else {
        cout<<"Not Rotation";
    }
    return 0;
}