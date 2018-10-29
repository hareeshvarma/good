#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i,count=0,j=0,c=0,d=0;
printf("enter any two value: ");
scanf("%d%d",&a,&b);
for(i=a+1;i<=b;i++)
{
    d=i;
    c=0;
for(j=1;j<=b;j++){
    if(d%j==0){
        c++;
    }
}
if(c==2){
    printf("%d ",i);
}
}
return 0;
}
