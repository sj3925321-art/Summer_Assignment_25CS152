#include<bits/stdc++.h> 
using namespace std;
int main() {
    int secret_number=rand()%100+1;
    int attempt=0,guess;
    while(guess!=secret_number) {
        cout<<"Enter guess number:";
        cin>>guess;
        attempt++;
        if(guess>secret_number) {
            cout<<"High"<<"\n";
        }
        else if(guess<secret_number) {
            cout<<"Low"<<"\n";
        }
    }
      cout<<"You are correct";
    return 0;
}