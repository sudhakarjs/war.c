#include<stdio.h>
int main()
{
int a,b,k,s,a[5],p;
scanf("%d",&n);
for(a=0;a<s;a++)
{
scanf("%d",&a[a]);
}
for(a=0;a<s;a++)
{
for(b=a+1;b<s;b++)
{
if(a[a]>a[b])
{
p=a[a];
a[a]=a[b];
a[b]=p;
}
}
}
k=s-2;
{
printf("%d",a[k]);
}
return 0;
}
