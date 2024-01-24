#include<stdio.h>
void main()

/*WAP to reversing a digit means palindrome number of a given number e.g: I/P:-123 = O/P:-321
{
	int num,num1,s,r;
	printf("Enter a number : \n");
	scanf("%d",&num);

	for(s=0,num1=num;num1;num1=num1/10)
	{
		r=num1%10;
		s=s*10+r;
	}
	printf("num=%d and rev=%d\n",num,s);
}
*/

/*WAP that given number is palindrome number is not?
{
	int num,num1,s,r;
	printf("Enter a number : \n");
	scanf("%d",&num);

	for(s=0,num1=num;num1;num1=num1/10)
	{
		r=num1%10;
		s=s*10+r;
	}
	if(s==num)
	printf("Number is Palindrome\n");	
	else
	printf("Number is not palindrome\n");
}
*/

/*WAP to check number is prime or not
{
	int num,c,i;
	printf("Enter a number : \n");
	scanf("%d",&num);

	for(i=1,c=0;i<=num;i++)
	{
		if(num%i==0)
		c++;
	}
	if(c==2)
	printf("Number is prime : \n");
	else
	printf("Number is not prime : \n");
}
*/

/*
{
	int num,c,i;
	printf("Enter a number : \n");	
	scanf("%d",&num);

	for(i=2,c=0;i<num;i++)
	{
		if(num%i==0)
		c++;
	}
	if(c==0)
	printf("Number is prime\n");
	else
	printf("Number is not prime\n");
}
*/

/* WAP 
{
	int num,i;
	printf("Enter a number : \n");
	scanf("%d",&num);

	for(i=2;i<num;i++)
	{
		if(num%i==0)
		break;
	}
	if(num==i)
	printf("Prime number\n");
	else
	printf("Not a prime number\n");
}



















