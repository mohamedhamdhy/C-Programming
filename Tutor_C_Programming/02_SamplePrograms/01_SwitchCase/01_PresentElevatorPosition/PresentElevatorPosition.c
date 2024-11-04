// 01. Mapping Floor Numbers to Names using a Switch Statement in C


#include <stdio.h>
int main()
{
int a;
printf("Enter Floor No : ");
scanf("%d",&a);
switch(a)
{
case 1:
  printf("\nFirst Floor");
break;
case 2:
  printf("\nSecond Floor");
break;
case 3:
  printf("\nThird Floor");
break;
default:
  printf("Invalid No");
break;
}
return 0;
}