#include<bits/stdc++.h> 
using namespace std;
int main() {
    string str;
    int count=1;
    cout<<"Enter a string:";
    getline(cin,str);
    for(int i=0; i<str.length(); i++) {
        if(str[i]==' ') {
            count++;
        }
    }
    cout<<"Total count in the sentence are:"<<count;
    return 0;
}