#include<stdio.h>
void main()
{
  int n,r,a,b,m,y,o,p;
  scanf("%d %d %d",&n,&a,&b);
  r=a+b;
  if(n%2==0)
  {
  m=n/2;
  y=n/2;
  }
  if(m>1 && y>1)
  {
  o=m/2;
  p=y/2;
  }
  else{printf("yes");}
  if(o==r && p==r)
  {
  printf("yes");
  }
  }
  else{printf("no");}
}
