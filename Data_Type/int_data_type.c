#include<stdio.h>
void main()

/*check the size of integer data types in 64 bit os
{
	printf("short int : %ld\n",sizeof(short int));
	printf("long int : %ld\n",sizeof(long int));
	printf("long long int : %ld\n",sizeof(long long int));
	printf("int : %ld\n",sizeof(int));
	//printf("%ld\n",sizeof(long long long int));
}
*/

/*scan short int and print it on the screen
{
	short int i;
	printf("Enter a number...\n");
	scanf("%hd",&i);                  // imp point is for short int we use %hd formate specifier.
	printf("i = %hd\n",i);
}
*/

//%p is a formate specifier to print the address of a variable 
{
	short int i,j;							//short int variable size is 2 byte 
	printf("The address of i = %p\n",&i);
	printf("The address of j = %p\n",&j);
}