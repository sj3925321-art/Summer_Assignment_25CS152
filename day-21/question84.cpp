#include<bits/stdc++.h>
using namespace std;
int main() {
    char str[]="GL BAJAJ";
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]>='a' && str[i]<='z') {
       str[i]=str[i]-32;
    }
}
    cout<<str;
    return 0;
}