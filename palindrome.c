#include <stdio.h>
void main()
{
  int k,n,i,sum=0;
  scanf("%d",&n);
  k=n;
  while(n)
  {
    i=n%10;
    sum=(sum*10)+i;
    n/=10;
  }
  if(sum==k)
  printf("palindrome");
  else
  printf("not palindrome");
}
