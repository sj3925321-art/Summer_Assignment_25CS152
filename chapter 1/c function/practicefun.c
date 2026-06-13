#include<stdio.h>
#include<math.h>
int area(int a);
int main() {
   int a;
   printf("enter the side a:");
   scanf("%d",&a);
   int result=area(a);
   printf("%d",result);
        return 0;
}
int area(int a) {
    int area;
    area=a*a;
    return area;

}