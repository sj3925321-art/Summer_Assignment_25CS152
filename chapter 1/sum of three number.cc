#include <stdio.h>
int main() {
    int a,b,c,average;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("enter third number");
    scanf("%d",&c);
    printf("%d",a+b+c);
    average=(a+b+c)/3;
    printf("%d",average);
    return 0;
}