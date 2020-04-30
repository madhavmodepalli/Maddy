#include<stdio.h>
#include<stdlib.h>

void main()
{
	int arr[3][3];
int* ptr;
ptr=&arr;
	int i,j,k,sum=0;
	printf("enter the elements of the 3x3 matrix :\n");
for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",(ptr + i *3 + j));
        }
    }
  for (i = 0; i < 3; i++)
  {

    for (j = 0; j <3; j++) {
      printf("%d ",*(ptr + i *3+ j));
    }
    printf("\n");
  }
  for(k=0;k<3;k++)
  {
  	sum=sum+ *(ptr+k*3+k);
  }
  printf("the sum of diagonal elements is : %d",sum);

}
