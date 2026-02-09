# include<stdio.h>
void main()
{
int i,n,max,min;
printf("enter the number");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("max=%d",max);
for(i=1;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("min=%d",min);
}


