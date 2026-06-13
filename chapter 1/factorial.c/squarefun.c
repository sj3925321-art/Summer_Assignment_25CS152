#include<stdio.h>
#include<math.h>
int a;
void square(int a);
int main() {
    int a;
    square(a);
    return 0;

}
void square(int a) {
    printf("enter the nuber:");
    scanf("%d",&a);
    a=pow(a,2);
    printf("%d\n",a);
}