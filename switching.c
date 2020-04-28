#include <stdio.h>

int main()
{
	int a;
printf("enter a number from 1 to 5\n");
scanf("%d",&a);

switch(a)
{
case 1:
printf("food item is burge\nr");
printf("price- Rs 129");
break;
case 2:
printf("food item is pizza\n");
printf("price- Rs 239");
break;
case 3:
printf("food item is french fries\n");
printf("price- Rs 99");
break;
case 4:
printf("food item is pasta\n");
printf("price- Rs 179");
break;
case 5:
printf("food item is sandwich\n");
printf("price- Rs 149");
break;
default:
	printf("invalid option");
}
return 0;

}
