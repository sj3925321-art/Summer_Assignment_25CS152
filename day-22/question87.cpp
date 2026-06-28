#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Type your sentence: ";
    getline(cin,s);
    int freq[52] = {0};
    for(int i=0;i<s.length();i++){
        if (s[i]==32){
            continue;
        }
        if (s[i]>=97){
            freq[s[i]+26-97]++;
        }
        else if (s[i]>=65){
            freq[s[i]-65]++;
        }
    }
    for(int i=0;i<52;i++){
        if (freq[i]>0 && i<26){
            cout<<char(65+i)<<": "<<freq[i]<<"\n";
        }
        else if (freq[i]>0 && i>=26){
            cout<<char(97-26+i)<<": "<<freq[i]<<"\n";
        }
    }
    return 0;
}