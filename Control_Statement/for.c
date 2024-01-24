#include<stdio.h>
void main()

/* To check how the for loop is working example
{
	int i;
	printf("Hello...\n");

	for(i=0;i<5;i++)
	printf("Hai i=%d\n",i);

	printf("Bye i=%d\n",i);
}
*/

/* this loop is work if condition is true next statement will execute else not working and rest all statement execute as useval because it is not part of if statement
{
	int i;
	printf("Hello...\n");

	for(i=5;i>0;i--)
	printf("Hai i=%d\n",i);

	printf("Bye i=%d\n",i);
}
*/

/*this for loop is dummy for loop it will rotate and when condition will false it will comes to
{
	int i;
	printf("Hello...\n");
		
	for(i=5;i>0;i--);
	printf("hai..i=%d\n",i);

	printf("Bye..i=%d\n",i);
}
*/

/*imp concept is ---> infinite for loop
{
	int i;
	printf("Hello.....\n");

	for(i=0;i<10;i+1)     // here control variable part operator must be expression. here i+1 will not modify he operand. it will be i=i+1. here + operator will not modify the operand.
	printf("Hai...i=%d\n",i);// i=0 

	printf("Bye...\n");
}
*/

/* this for loop will rotate 5 times both initialization and modification side correct expression is available and bye will print i=10 because at i=10 condition will false so it will come out from loop.it will overcome the problem of above example.
{
	int i;
	printf("Hello....\n");

	for(i=0;i<10;i=i+2)
	printf("Hai....i=%d\n",i);

	printf("Bye....i=%d\n",i);	
}
*/


/* The program if for if we give unsigned int data type for i>=0 condition. it will rotate infinite times.
{
	unsigned int i; // value of unsigned int is 0-4G
	printf("Hello...\n");

	for(i=5;i>=0;i--)      // here 0>=0 after that 4G>=0 this condition will come because of unsigned int type so this loop will rotate infinite times.
	printf("Hai....i=%u\n",i);// here %d formate specifier if we give it will give -ve values so we are giving %u formate specifier

	printf("Bye...\n");

}
*/

/* here if it is unsigned data type but condition is failed at 0>0 so it will rotate only 5 times

{
	unsigned int i;
	printf("Hello...\n");

	for(i=5;i>0;i--)    // here if it is unsigned data type but condition is failed at 0>0 so it will rotate only 5 times
	printf("Bye...i=%d\n",i);
}
*/

/* here we gave unsigned int type but loop will continue rotte because of condition
{
	unsigned int i;
	printf("Hello....\n");

	for(i=5;i>0;i++)
	printf("hai....i=%d\n",i);

	printf("Bye....i=%d\n",i);
}
*/

/* here we are initialialising 2 variables and 2 control variables using comma(,) operator 
{
	int i,j;
	printf("Hello...\n");

	for(i=0,j=10; i<j ; i++,j--)
	printf("Hai.. i=%d j=%d\n",i,j);

	printf("Bye...i=%d j=%d\n",i,j);
} 
*/

/*if we put bank the initialization part from for loop what will happen
{
	int i=0,j=10;
	printf("Hello....\n");

	for( ;i<j;i++,j--)
	printf("Hai....i=%d j=%d\n",i,j);

	printf("Bye....i=%d j=%d\n",i,j);
	
}
*/

/* if we are not giving initialization and control variable portion although it will run the code but if we hae to give 2 or more statement to run after if give {} after for loop else loop will rotate unespected
{
	int i=0;

	for( ;i<10; )
	{
	    printf("Hai....i=%d\n",i);
	    i++;
	}
}
*/

/* if we are not giving condition it will give infinite times rotation
{
	int i=0;
	
	for(; ;)
	{
		printf("Hai...i=%d\n",i);
		i++;
	}
}
*/

/*if we are put all the condition in for loop and not given exact 2 semicolons it will give error
{
	int i=0;

	for( ; )
	{	
		printf("Hai....i=%d\n",i);
		i++;
	}
}
*/

/*if condition will not give in for loop it will print infinite times
{
	int i=0;

	for(i=2;  ;i=i+2)
	{
		printf("Hai i=%d\n",i);
	}
}
*/

/*WAP to rotate for loop 10 times in that 5 times it will +ve print and 5 times it will negative print 
{
	int i=0;

	for(i=-5;i<5;i++)
	{
		printf("Hi... i=%d\n",i);
	}
}
*/
































































