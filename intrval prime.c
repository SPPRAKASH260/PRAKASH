{
  int n,i,m,flag;
  scanf("%d",&m);
  scanf("%d",&n);
  while(m<n)
  {
  for(i=2;i<=m/2;i++)
  {
  flag=0;
    if(m%i==0)
    {
    flag=1;
    break;
    }
  }
  if(flag==0)
  {
  printf("  %d",m);
  }
  ++m;
  }
}
