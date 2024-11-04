// Find the Greatest Number Using Ternary Operator ( ?: ) in C


#include<stdio.h>
int main()
{
 int a,b;
 printf("\nEnter the First value:");
 scanf("%d",&a);
 printf("\nEnter the Second value:");
 scanf("%d",&b);
 a>b?printf("First value is Biggest:%d",a):printf("Second value is Biggest:%d",b);
 return 0;
}