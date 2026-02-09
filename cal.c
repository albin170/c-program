#include<stdio.h>
void main()
{
char o;
int a,b,c;
printf("enter the character:");
scanf("%c",&o);
printf("enter the no:");
scanf("%d%d",&a,&b);
//printf("enter the character:");
//scanf("%c",&o);
switch(o) {
   case '+':
    c=a+b;
    printf("result:%d",c);
    break;
    
   case '-':
     c=a-b;
     printf("result:%d",c);
     break;
   case '*':
      c=a*b;
      printf("result:%d",c);
      break;
   case '/':
     if (b!=0){
      c=a/b;
      printf("result:%d",c);
      }
    else{
      printf("division by zero is not possible");
      }
    break;
    
    case '%':
     if (b!=0){
      c=a%b;
      printf("result:%d",c);
      }
    else{
      printf("division by zero is not possible");
      }
    break;
    default:printf("error");
    
 }  } 
