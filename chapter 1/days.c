# include<stdio.h>
int main() {
char a,b,c,d,e,f,g;
printf("enter the number");
scanf("%c",&a);
switch(a)
{
  case'a':
  printf("Monday");
  break;
  case'b':
  printf("Tuesday");
  break;
  case'c':
  printf("Wdnesday");
  case'd':
  printf("Thursday");
  break;
  case'e':
  printf("Friday");
  break;
  case'f':
  printf("Saturday");
  break;
  case'g':
  printf("Sunday");
  break;
  default:
  printf("invalid input");
  break;
}
return 0; 
}