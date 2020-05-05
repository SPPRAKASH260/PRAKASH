#include <stdio.h>
void main()
{
  int n,i,s[10],k,sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&s[i]);
  }
  printf("enter k");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
    sum=sum+s[i];
  }
  printf("%d",sum);
}//Ho you
