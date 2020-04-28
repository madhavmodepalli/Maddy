#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a,b;
 printf("enter the values the numbers to be swapped ");
 scanf("%d %d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("after swapping : %d %d",a,b);
}
