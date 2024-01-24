#include<stdio.h>
void main()

/* Declaration of character with initialization in two lines
{
	char ch;
	ch = 'a';
	printf("ch = %c\n",ch);
}
*/

/* To overcome memory issue it is the correct way to declare and initialise character data type
{
	char ch = 'a';
	printf("ch = %c\n",ch);
}
*/

/*
{
	char ch = 'a';
	printf("%c %d %o %x\n",ch,ch,ch,ch);
}
*/

/*
{                                      // 0000 0001 ---> 1
	char ch = -1;                  // 1111 1110 ---> 1's compliment
	printf("ch = %d\n",ch);        // +       1 ---> 2's compliment
}                                      //-------------------------------
				       //   1111 1111 ---> negative number are stores in its 2's compliment.
*/

/*
{
	char ch = 97;
	printf("%c %d %o %x\n",ch,ch,ch,ch);
}
*/

{
	char ch = 97;
//	unsigned char ch = 97;
	printf("%d\n",ch);
	
	ch=ch+3;
	printf("%d\n",ch);

	ch=ch*2;
	printf("%d\n",ch);

	ch=ch+60;
	printf("%d\n",ch);
}		


