#include <stdio.h>
void main()
{
  long n;
  int c=0;
  scanf("%ld",&n);
  while(n)
  {
    n/=10;
    c++;
  }
  printf("%d",c);
}
