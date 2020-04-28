#include<stdio.h>
main()
{
 int i,j,num;
 printf("Enter number of rows\n");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {

  for(j=1;j<=i;j++)
  {
   printf("01");

  }

 printf("\n");
 }
}
