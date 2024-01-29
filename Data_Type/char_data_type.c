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

/*To check a given char data in different forms i.e char and int(decimal,octal,hex) using conversion form (Number system)
{
	char ch = 'a';
	printf("%c %d %o %x\n",ch,ch,ch,ch);
}
*/

/*In char any constant negative number provided it always store in its 2's complement
{                                  // 0000 0001 ---> 1
	char ch = -1;                  // 1111 1110 ---> 1's compliment
	printf("ch = %d\n",ch);        // +       1 ---> 2's compliment
}                                  //-------------------------------
							       // 1111 1111 ---> negative number are stores in its 2's compliment.
*/

/*In char data type given any integer constant and convert it into different forms of data
{
	char ch = 97;
	printf("%c %d %o %x\n",ch,ch,ch,ch);
}
*/

/*
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
*/

/*Wen we give range more than 255 i.e is 1 byte it will rolled out for unsigned char and for signed char
{
	//unsigned char ch = 300;
	char ch = 300;
	printf("%d\n",ch);
}
*/

								// 111110100                  ---> Binary for of 500
{								//  11110100				  ---> here char datat type so are not taking 256th bit so excluding 256th bit the form is like for unsigned it is (244) 
	//unsigned char ch = 500;	//  00001011				  ---> sign bit is 1 so we need to do 2's complement 
	signed char ch = 500;
	printf("%d\n",ch);			//+        1				  ----> once complement
						        //---------------
}							    //  00001100				  ----> -12 for signed char 	
