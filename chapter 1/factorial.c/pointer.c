#include<stdio.h>
int main() {
 char i='a';
    char *ptr=&i;
    char **pptr=&ptr;
    printf("%c\n",**pptr);
    return 0;

}