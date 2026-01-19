#include<stdio.h>
void main()
{
int a,b;
printf("enter the numbers:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("swaped number %d\n%d",a,b);
}
