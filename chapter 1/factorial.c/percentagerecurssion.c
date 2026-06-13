#include<stdio.h>
int calculatepercentage(int a,int b,int c);
int main() {
    int a,b,c;
    printf("enter the marks a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    int T=calculatepercentage(a,b,c);
    printf("%d\n",T);
    return 0;
}
int calculatepercentage(int a, int b,int c) {
    return ((a+b+c)/3)*100;
}