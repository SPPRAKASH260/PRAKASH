#include <stdio.h>
void main()
{
  int k,n,i,sum=1;
  scanf("%d",&n);
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
    sum=sum*n;
  }
  printf("%d",sum);
}
