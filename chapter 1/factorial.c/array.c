#include<stdio.h>
int main() {
    int i;
    int arr[10];
    for(int i=0;i<=9;i++){
        printf("enter the number%d\n:",i+1);
     scanf("%d",&arr[i]);
    }
    if(arr[i]<35) {
        printf("%d\n",i);
    }
    return 0;
} 