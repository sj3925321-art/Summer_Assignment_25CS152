#include<stdio.h>
int main() {
    int i;
  int marks[10];
    for(int i=0;i<=9;i++) {
    printf("enter the marks%d\n:",i+1);
scanf("%d",&marks[i]);
    }
    if(marks[i]<35) {
        printf("%d",marks[i]);
    }
return 0;
}