#include<stdio.h>
void main()

/*
example of backword jump
{
	printf("Hello...\n");
	A1:                         // setting a label
		printf("Hai...\n");
	goto A1;                    // calling a label
	printf("Bye...\n");
}
*/

/*above code hello is printed but we can't able to see on screen to overcome this issue we are using sleep(1) function 
{
	printf("Hello...\n");
	A1:
		sleep(1);   // after every 1 sec it will print hai..
		printf("Hai...\n");
	goto A1;
	printf("Bye...\n");
}
*/

/*example of forword jump
{
	printf("Hello....\n");
	goto A1;		// calling a label
		printf("Hai....\n");// statement cannot execute after goto A1
	A1:                     // setting a label
	printf("Bye.....\n");
}
*/

/*label name cannot be a constant or keyword. setting the label and calling the label boh must and should be within a function so it is called as local goto
{
	int i;
	printf("Hello...\n");
	goto i;
		printf("Hai....\n");
	i:
	printf("Bye...\n");
}
*/

/*WAP to display multiplication table of a given number
//if num=5
//5*1=5
//5*2=10
//5*3=15
//..
//5*10=50

{
	int num,i=1;
	printf("Enter a number : \n");
	scanf("%d",&num);
	A1:
 	printf("%d * %d = %d\n",num,i,num*i);
	i++;
		if(i<=10)
		goto A1;

	printf("Thanks....\n");

}
*/

//WAP to print binary formate of a given number using goto 
//ex: given number is 15
//then output should be : 00000000000000000000000000001111
{
	int num,pos=31;
	printf("enter a number : \n");
	scanf("%d",&num);

	L1:
	printf("%d",num>>pos&1);
	pos--;
	if(pos>=0)
	goto L1;
	printf("\n");
}




























