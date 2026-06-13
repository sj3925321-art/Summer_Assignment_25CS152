#include<stdio.h>
int main() {
    int i;
   int arr[10]={45,75,93,23,98,75,12,54,9,31};
   for(int i=0;i<=9;i++)
    if(arr[i]<35) {
        printf("%d\n",i);
    }
   // else
   // printf("%d\n",i);
return 0;
}