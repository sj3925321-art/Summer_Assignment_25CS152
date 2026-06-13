#include<stdio.h>
int factorial(int a); 
int main() {
    int a;
    printf("%d\n",factorial(5));
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