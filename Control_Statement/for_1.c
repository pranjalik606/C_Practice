#include<stdio.h>
void main()


/*WAP of multiplication table using for loop
{	
	int num,i;
	printf("Enter the number : \n");
	scanf("%d",&num);

	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
	printf("Thanks...\n");
}
*/

/*If we give semicolon at the end of for loop 
for(i=1;i<=10;i++)
{
	no statement
}
dummy for loop means actually we can assue like above.
{
	int num,i;
	printf("Enter the number : \n");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++); 	// here if we give semicolon it will complete loop and at last it will false come out and contiue down part
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
	printf("Thanks....\n");
}
*/

/*WAP to print Binary format of a given number using for loop
	eg: given number is 15
	then output should be
	00000000000000000000000000001111

{
	int num,pos;
	printf("Enter the number...\n");
	scanf("%d",&num);

//	for(pos=31;pos>=0;pos--)
	for(pos=0;pos<=31;pos++)
	{	
		printf("%d",num>>pos&1);
	}
	printf("\n");
}
*/

/*WAP to count How many bits are set in a given number
  eg: if number is 15
  set bit = 4
{
	int num,pos,c; // if i initialize this c=0 but for large program it may be not.
	printf("Enter the number : \n");
	scanf("%d",&num);
	for(pos=0,c=0;pos<=31;pos++)
	{
		//if(num>>pos&1)
		if(num&1<<pos)
		c++;
	}
	printf("c=%d\n",c);
}
*/

/*WAP to count exact number of set and clear bit of given number
{
	int num,pos,c;
	printf("Enter a number : \n");
	scanf("%d",&num);

	for(pos=0,c=0;pos<=31;pos++)
	{
		if(num&1<<pos)
		c++;
	}
	printf("number of bits set = %d\n",c);
	printf("Number of bits clear=%d\n",32-c);
}
*/



























































