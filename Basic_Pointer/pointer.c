#include<stdio.h>
void main()
/*Address operator concept 
{
	int i=10;
	printf("%d\n",i);
	printf("%p\n",&i);
}

/*Accessing data directly or indirectly through pointer
{
	int i=10,j=20;
	int *p;		// *p is a pointer variable which holds the garbage 

	p=&i;		// pointer is pointing to valid address location

	printf("i=%d *p=%d\n",i,*p);

	p=&j;           // pointer is pointing to j 

	printf("j=%d *p=%d\n",j,*p); 


}
*/

/*How can we access the data or modified data indirectly
{
	int i=10,j=20;
	int *p;

	p=&i;		// pointer is pointing to valid address location 
	printf("i=%d *p=%d\n",i,*p);
	
	*p=100;		// modifying the i value indirectly (i=100 direct modification)
	printf("i=%d *p=%d\n",i,*p);

	*p=i;		// pointer 
	printf("i=%d *p=%d\n",i,*p);

	p=&j;		// pointer is pointing to valid address location 
	printf("j=%d *p=%d\n",j,*p);

	*p=200;		// pointer 
	printf("j=%d *p=%d\n",j,*p);

	*p=j;		//
	printf("j=%d *p=%d\n",j,*p);
}
*/

/*WAP to check pointer size of int,char and float
{
	char *cp;
	float *fp;
	int *ip;

	printf("cp=%ld\n",sizeof(cp));	
	printf("fp=%ld\n",sizeof(fp));
	printf("ip=%ld\n",sizeof(ip));
}
*/

/*WAP to check primary data type size and secondary data type size
{
	char ch, *cp;
	int i, *ip;
	float f, *fp;

	printf("%ld %ld\n",sizeof(ch),sizeof(cp));
	printf("%ld %ld\n",sizeof(i),sizeof(ip));
	printf("%ld %ld\n",sizeof(f),sizeof(fp));
}
*/

/*WAP to check size and value of primary and secondary data type 
{
	char ch='a',*cp;
	int i=10,*ip;
	float f=23.5,*fp;

	cp=&ch;
	printf("ch=%c *ch=%c\n",ch,*cp);
	printf("ch=%ld cp=%ld\n",sizeof(ch),sizeof(cp));

	ip=&i;
	printf("i=%d *ip=%d\n",i,*ip);
	printf("i=%ld *ip=%ld\n",sizeof(i),sizeof(ip));

	fp=&f;
	printf("f=%f *fp=%f\n",f,*fp);
	printf("f=%ld *f=%ld\n",sizeof(f),sizeof(fp));
}
*/

/*
{
	int i=258;
	int *ip;
	char *cp;
	
	ip=&i;

	cp=(char *)&i;

	printf("*ip=%d *cp=%d\n",*ip,*cp);
}
*/

/*WAP a program to prove that we are working in little enidian environment
{
	int i=10;
	char *p;
	
	p=&i;
	if(*p==10)
	printf("Little endianness....\n");
	else
	printf("Big endianness....\n");
}
*/




























