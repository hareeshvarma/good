#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,sum1=0,sum2=0,r=0,r1=0,a[100],l;
scanf("%d",&n);
int sum3=0,sum4=0,r3=0,r4=0,h=0;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
l=n/2;

if(n>2)

{
    for(i=0;i<l+1;i++)
{
sum1=sum1+a[i];
r++;
}

for(i=l+1;i<n;i++)
{
sum2=sum2+a[i];
r1++;
}
if(sum1/r==sum2/r1)
{printf("yes");}
else{ h=1;}
}
else{printf("no");}
 if(h==1)
{
     for(i=0;i<l;i++)
{
sum3=sum3+a[i];
r3++;
}
for(i=l;i<n;i++)
{
sum4=sum4+a[i];
r4++;
}
if(sum3/r3==sum4/r4)
{printf("yes");}
else{h=2;}
}
if(h==2){printf("no");}
return 0;

}
