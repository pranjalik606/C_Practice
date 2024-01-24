#include<stdio.h>
void main()

/*WAP to scan a character and display Ascii value
{
        char ch;
          
	printf("Enter the char....\n");
        scanf("%c",&ch);
  
        printf("ch=%c and its ascii=%d\n",ch,ch);
}
*/
  
/*WAP to scan a character of small letter only and print it on screen
{
        char ch;
        printf("Enter a character: \n");
        scanf("%c",&ch);
  
      //if(ch>=97 && ch<=122)   // we can write as per ascii value also----> char is greater than  ascii of a and char is less than ascii of z 
        if(ch>='a' && ch<='z')  // condition is char is greater than a and and char s less than z
      				//here we are writing && sign that means both condition need to satisfy.
  
        printf("ch=%c and ascii=%d\n",ch,ch); // It will display when if condition will true
        printf("Bye....\n");    // it will print normally because it is not a part of if.
}
*/

/*WAP to scan a charcater and display it on screen
{
	char ch;
	printf("Enter a character : \n");
	scanf("%c",&ch);

	printf("Hello....\n");
	if(ch>='a' && ch<='z');   // here we are given semicolon at the end of the if so it will terminate here
	{
		printf("ch=%c and ascii=%d\n",ch,ch);
		printf("Hai...\n"); //these loop is not at all depend on if condition because of dummy loop.
	}
}
*/


