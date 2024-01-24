#include<stdio.h>
void main()

//sizeof opertor will give us long int as result
//sizeof operator used to find out sizeof variable,constant,datatype in the form of bytes.

/*
{
	char ch = 'a';
	printf("%ld %ld %ld\n",sizeof(char),sizeof(ch),sizeof('a'));// for a it will take ascii value so it will consider as int so it will take 4 byte
}
*/

/*
{
	int i=10;
	printf("%ld %ld %ld\n",sizeof(int),sizeof(i),sizeof(10));
}
*/

/* Here it will store value of sizeof(int) into r
{
	int r;
	r = sizeof(int);
	printf("%d\n",r);
}*/

{
	char ch = 'a';
	int i=10,j;
	printf("%ld %ld %ld\n",sizeof(ch),sizeof(i),sizeof(j));
	
}
