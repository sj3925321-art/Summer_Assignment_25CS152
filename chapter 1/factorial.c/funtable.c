#include<stdio.h>
// function declaration
int a;
int printtable(int a);

int main() {
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printtable(a); // argument/actual parameter[value in function call and used send value ]
    return 0;
}
    int printtable(int a) { //parameter/formal parameter [value in fuction decleration and defination and used receive value]
        for(int i=1;i<=10;i++) {
            printf("%d\n",a*i);
        }
    }
    

