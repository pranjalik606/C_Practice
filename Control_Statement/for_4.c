#include<stdio.h>
void main()
{
	int fact,num;
	printf("Enter a number : \n");
	scanf("%d",&num);

	for(fact=1;num;num--)
	{
		fact=fact*num;
	}
	printf("factorial of give number is %d\n",fact);
}
