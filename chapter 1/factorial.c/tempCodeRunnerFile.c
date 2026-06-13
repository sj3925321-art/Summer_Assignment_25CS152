#include<stdio.h>
void price(int a);
int main() {
    int a;
    printf("enter the price a:");
    scanf("%d",&a);
    price(a);
return 0;
}
void price(int a) {
    a=a+0.18*a;
    printf("%d",a);
}