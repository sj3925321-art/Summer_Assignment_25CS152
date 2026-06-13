#include<bits/stdc++.h> 
using namespace std;
int fibonacci(int n);

int main() {
    int n,sum=0;
    cin>>n;
    for(int i=0; i<n; i++) {
        sum=sum+fibonacci(i);
    }
    cout<<sum;
    return 0;
}
int fibonacci(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
return 1;
    }
    int fibonacciNM1=fibonacci(n-1);
    int fibonacciNM2=fibonacci(n-2);
    int fibonacciN=fibonacciNM1+fibonacciNM2;
    return fibonacciN;
}
