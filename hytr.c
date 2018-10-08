#include<stdio.h>
#include<conio.h>
int main()
{
    char sub;
    printf("enter the letter :");
    scanf("%c",&sub);
    if(sub=='a'||sub=='e'||sub=='i'||sub=='o'||sub=='u'||sub=='A'||sub=='E'||sub=='I'||sub=='O'||sub=='U')
    {
        printf("vowles");
     }
    else if(sub>='a' && sub<='z'){
           printf("Consonant");
    }
    else 
    {
        printf("Invalid");
    }
    return 0;
}
