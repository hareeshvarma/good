#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, c;
printf("enter any three value: ");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("%d is the greatest number",a);
}
else if (b>a && b>c){
printf("%d is the greatest number",b);
}
else
    {
printf("%d is the greatest number",c);
}
getch();
return 0;
}
