#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[98],c[76];
printf("enter the value");
scanf("%c",&a);
printf("enter the second value");
scanf("%c",&b);
c=strcat(a,b);
printf("%c",c);
getch();
}
