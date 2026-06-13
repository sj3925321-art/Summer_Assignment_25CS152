#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,rows;
    cin>>rows;
   // for(int i=0; i<=5; i++) {
     //   for(int j=0; j<5; j++) {
       //     cout<<" ";
        
        //cout<<"*"<<"\n";
    //}
    //return 0;
//}
 for (int i = 0; i < rows; i++)
    {

        // This loop for printing leading whitespaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
        {
            cout<<" ";
        }

        // This loop for printing * character in each row
        for (int k = 0; k <= i; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}