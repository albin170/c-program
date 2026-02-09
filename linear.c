#include<stdio.h>
void main()
{
int a,b,c,e=0,d[50];
printf("limit");
scanf("%d",&a);
for(b=0;b<a;b++)
{
printf("enter no");
scanf("%d",&d[b]);
}
scanf("%d",&c);
for(b=0;b<a;b++)
{
if(d[b]==c)
{
printf("search succesfull");
e=1;
break;
}}

if(e==0)
{
printf("not found");
}}
