#include<stdio.h>
void main()

/* blank for loop
{
	printf("Hello...\n");
        for( ; ; );        // infinite time run 
        printf("Hai....\n");	
}
*/


/*WAP of adding the digits of a given number
{
	int num,s,r;
	printf("Enter a number : \n");
	scanf("%d",&num);

	for(s=0;num;num=num/10)
	{
		r=num%10;
		s=s+r;
	}
	printf("num=%d and sum=%d\n",num,s);
}
*/


/*num holds the 0 at before program so we loose num to overcome this problem using another num declaration
{
	int num,num1,s,r;
	printf("Enter a number : \n");
	scanf("%d",&num);

	for(s=0,num1=num;num1;num1=num1/10)
	{
		r=num1%10;
		s=s+r;
	}
	printf("num=%d and sum=%d\n",num,s);
}
*/

/*WAP that we need o count number of digits present in a number in same program
{
	int num,num1,s,r,c;
	printf("Enter a number : \n");
	scanf("%d",&num);

	for(s=0,c=0,num1=num;num1;num1=num1/10)
	{
		r=num1%10;
		s=s+r;
		c++;
	}
	printf("num=%d and sum=%d and c=%d\n",num,s,c);
}
*/

/*WAP if sum is -ve number making this as +ve for that we written a program*/
{
	int num,num1,s,r,c;
	printf("Enter a number : \n");
	scanf("%d",&num);

	for(s=0,c=0,num1=num;num1;num1=num1/10)
	{
		r=num1%10;
		s=s+r;
		c++;
	}
	if(s<0)
	s=-s;                // unary (-)operator

	printf("num=%d sum=%d c=%d\n",num,s,c);
}










































