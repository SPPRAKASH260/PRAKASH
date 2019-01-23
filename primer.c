#include <stdio.h>
void main()
{
  int k=0,n,i;
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    k=1;
    break;
  }
  if(n==1)
  {
  printf("1 is either prime nor composite");
  }
  else
  {
  if(k==0)
  printf("prime");
  else
  printf("not prime");
  }
}
