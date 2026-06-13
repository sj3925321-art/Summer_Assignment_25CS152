#include<bits/stdc++.h>
using namespace std;
int main () {
    int marks;
    cin>>marks;
    if(marks>80 && 100>=marks) {
        cout<<"A";
    }
    else if(marks>60 && 79>=marks) {
        cout<<"B";
    }
    else if(marks>50 && 59>=marks ) {
        cout<<"C";
    }
    else
    cout<<"fail";
return 0;
}