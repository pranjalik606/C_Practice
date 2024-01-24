#include<stdio.h>
void main()

/* Type_if_1: if condition is true then only it will enter into curly brace and execute statements all
{
	int i=10,j=20;
	printf("Hello....\n");
	if(i>j)                     // if condition will give non-zero value(1) then only it will enter into the loop else for zero(0) it will come out from loop.
	{
		printf("Hai....\n");
		printf("Bye....\n");
	}
}
*/

/* Type_if_2: if condition is executed then only it will execute next block means only one statement in block remainning all statement will execute as normal it is not related to if.
{
	int i=10,j=20;
	printf("Hello....\n");      // Hello will print normally because it is before if condition.
	if(i<j)                     // if condition will give non-zero value(1) then only it will execute 1st statement otherwise it will not execute 1st statement
	printf("Hai....\n");
	printf("Bye....\n");        // it will print Bye normally because it is not a part of if statement. 
}
*/

/* Type_if_3: (dummy if loop) if condition will execute but suddenly it will terminate so it is not entered in next line so the block of if will execute as 
{
	int i=10,j=20;
	printf("Hello...\n");
	if(i>j);                    // condition will execute but it will terminate and the next loop or block are not depends on if condition it will run normally.
	{                           // it is not a part of if statement  
		printf("hai...\n");
		printf("Bye...\n");
	}
}
*/

/* Type_if_4: if we assign any value in if condition what should haapen this value will modifiy or not
{
	int i=10,j=20;
	printf("Hello...\n");
	if(i=200)                     // here value will be modify.
	{
		printf("Hai...\n");
		printf("Bye...i=%d\n",i);// i=200
	}
}
*/

/*WAP to scan a character and display Ascii value
{
	char ch;
	printf("Enter the char....\n");
	scanf("%c",&ch);

	printf("ch=%c and its ascii=%d\n",ch,ch);
}
*/

// WAP to scan a character of small letter only and print it on screen
{
	char ch;
	printf("Enter a character: \n");
	scanf("%c",&ch);

	if(ch>=97 && ch<=122)   // we can write as per ascii value also----> char is greater than  ascii of a and char is less than ascii of z 
	//if(ch>='a' && ch<='z')  // condition is char is greater than a and and char s less than z
	// here we are writing && sign that means both condition need to satisfy.

	printf("ch=%c and ascii=%d\n",ch,ch);
	printf("Bye....\n");

}




