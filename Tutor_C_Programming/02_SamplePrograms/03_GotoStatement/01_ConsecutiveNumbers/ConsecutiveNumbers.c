#include <stdio.h>
int main()
{
  int i,n;
  printf("Enter the number start and end:");
  scanf("%d%d",&i,&n);
  start:
  printf("\n%d",i);
  i++;
  if(i<=n)
  {
    goto start;
  }
  return 0;
}