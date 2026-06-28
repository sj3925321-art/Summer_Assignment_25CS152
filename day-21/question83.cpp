#include<bits/stdc++.h>
using namespace std;
int main() {
    char str[]="GL BAJAJ";
    int vowel=0;
    int consonants=0;
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            vowel++;
        }
        else {
            consonants++;
        }

    }
        cout<<"Vowels:"<<vowel<<"\n";
        cout<<"Consonants:"<<consonants;
    return 0;
}