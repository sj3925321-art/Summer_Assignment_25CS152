#include<stdio.h>
void price(int a);
int main() {
    int a=100;
    price(a);
    printf("%d\n",a);
return 0;
}
void price(int a) {
    a=a+(0.18*a);
    printf("%d\n",a);
}