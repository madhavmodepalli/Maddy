#include <stdio.h>

#include<stdlib.h>

struct employee

{

	int no;

    char name[20];

    char dept[20];

    unsigned long int salary;

};



void display(struct employee e);



int main()

{

	int i;

    struct employee e[20];

    for(i=0;i<20;i++)

    {

    	printf("roll.no of the employee %d\n",i+1);

    	scanf("%d",&e[i].no);

    	printf("name of the employee %d\n",i+1);

    	scanf("%s",&e[i].name);

    	printf("department of the employee %d\n",i+1);

    	scanf("%s",&e[i].dept);

    	printf("salary of the employee %d\n",i+1);

    	scanf("%lu",&e[i].salary);

    	

	}

	for(i=0;i<20;i++)

	{

		 printf("\nDisplaying information of employee %d\n",i+1);

		display(e[i]);

    

    return 0;

}

void display(struct employee e) 

{

  printf("roll.number: %d\n",e.no);

   printf("Name: %s\n",e.name);

    printf("department: %s\n",e.dept);

     printf("salary: %lu\n",e.salary);

}
