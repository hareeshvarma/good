#include<stdio.h>
#include<conio.h>
int main()
{
int h,m,n;
printf("enter the number: ");
scanf("%d",&n);
if(n>60){

h=(n/60);
m=(n-(60*h))/1;
printf("%d %d",h,m);
}
else{printf("0 %d",n);}
return 0;
}
