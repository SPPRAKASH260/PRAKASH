#include <stdio.h>
void main()
{
  int n,m,r,sum=0;
  scanf("%d",&m);
  n=m;
  while(m)
  {
    r=m%10;
    sum+=r*r*r;
    m/=10;
  }
  if(sum==n)
  printf("ARMSTRONG NUMBER");
  else
  printf("NOT ARMSTRONG NUMBER");
} 
  
