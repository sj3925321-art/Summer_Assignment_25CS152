#include<bits/stdc++.h>
using namespace std;
int main () {
    int i, n, x, count, remainder, armstrong, rem;
    cin>>n;
    
    for(i=1; i<=n; i++) {
        count = 0;
        armstrong = 0;
        
        // Count digits in i
        for(x=i; x!=0; x=x/10) {
            count++;
        }
        
        // Calculate sum of digits^count for number i
        for(x=i; x!=0; x=x/10) {
            rem = x%10;
            armstrong = armstrong + round(pow(rem, count));
        }
        
        // If armstrong number, print it
        if(armstrong == i)
            cout<<armstrong<<"\n";
    }
    return 0;
}