#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of names:";
    cin>>n;
   string name[n];
   cout<<"Enter all names:";
   for(int i=0; i<n; i++) {
    cin>>name[i];
   }
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(name[i]>name[j]) {
            swap(name[i],name[j]);
        }
    }
}
cout<<"name are in alphabetical order:";
for(int i=0; i<n; i++) {
    cout<<name[i]<<"\n";
}
return 0;
}