#include<stdio.h>
int main(void)
{
    int a[100],k,v,s,m;
    scanf("%d",&s);
    for(k=0;k<s;k++)
    {
        scanf("%d",&a[k]);
    }
    for(k=0;k<s;k++)
    {
         for(v=k+1;v<s;v++)
         {
            if(a[k]>a[v])
            {
            m=a[k];
            a[k]=a[v];
            a[v]=m;
            }
        }
        
    }
    for(k=0;k<s;k++)
    {
        printf("\n%d",a[k]);
    }
}
