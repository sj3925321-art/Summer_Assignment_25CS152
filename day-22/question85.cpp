#include<bits/stdc++.h>
using namespace std;
int main() {
    string str,rev;
    cout<<"Enter a string:";
   cin>>str;
   rev=str;
  reverse(rev.begin(),rev.end());
  if(str==rev) {
    cout<<"palindrome";
  }
  else {
    cout<<"Not Palindrome";
  }
    return 0;
}