// 01. Checking if a character is a vowel using a Switch Statement in C


#include <stdio.h>
int main()
{
char x;
printf("\n Enter the alphabet :");
scanf("%c",&x);
switch(x)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
  printf("\n%c is a vowel alphabet",x);
break;
default:
  printf("\n%c is not a vowel",x);
break;
}
return 0;
}