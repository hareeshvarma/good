#include<stdio.h>
#include<string.h>
int main()
{
int n,r,sum=0,t,val=0,w;
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
t=sum;

while(sum>0)
{
w=sum%10;
val=val*10+w;
sum=sum/10;
}
sum=t;
if(sum==val)
{
printf("yes");
}
else{printf("no");}


}
