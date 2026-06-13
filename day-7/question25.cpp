#include<bits/stdc++.h>
using namespace std;
int factorial(int a);
int main() {
    int a;
    cin>>a;
   cout<<factorial(a);
   return 0;
}
int factorial(int a) {
    if(a==0) {
        return 1;
    }
 int factorialNM=factorial(a-1);
int factorialN=a*factorialNM;
return factorialN;
}