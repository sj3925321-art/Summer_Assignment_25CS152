#include<bits/stdc++.h>
using namespace std;
int fibonacci(int a);
int main () {
    int a;
    cin>>a;
    cout<<fibonacci(a);
    return 0;
}
int fibonacci(int a) {
    if(a==0) {
        return 0;
    }
    if(a==1) {
        return 1;
    }
    int fibonacciNM1=fibonacci(a-1);
    int fibonacciNM2=fibonacci(a-2);
    int fibonacciN=fibonacciNM1+fibonacciNM2;
    return fibonacciN;
}