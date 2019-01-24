#include <stdio.h>
void main()
{
  int n,m,r,sum=0,k,i;
  scanf("%d%d",&m,&n);
  for(i=m;i<=n;i++)
  {
  k=i;
  while(i)
  {
    r=i%10;
    sum+=r*r*r;
    i/=10;
  }
  if(sum==k)
  printf("ARMSTRONG NUMBER");
  else
  printf("NOT ARMSTRONG NUMBER");
  }
} 
  
