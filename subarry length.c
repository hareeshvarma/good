#include<stdio.h>
void main()
{
    int n,i,j,l=0,h,sum,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        h=0;
        sum=a[i];
        for(j=i;j<n;j++)
        {
            if(sum<a[j])
            {
               sum=a[j];
               h++;
            }}
        if(l<h)
        {
            l=h;
            }}
            printf("%d",l+1);

}

