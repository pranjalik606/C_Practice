#include<stdio.h>
void main()

/* assignment is binary operator it requires two opernds to perform a task
{
	int i=10,j=20,k=30;
	printf("i = %d j = %d k = %d\n",i,j,k);
	k = j = i;
	printf("i=%d j=%d k=%d\n",i,j,k);
}
*/


/* lvalue required as left operand of assignment we cannot assign variable into constant
{
	int i=10,j=20,k=30;
	printf("i=%d j=%d k=%d\n",i,j,k);
	k=j=100=i;   
	printf("i=%d j=%d k=%d\n",i,j,k);

}
*/

/*we can take unsigned value for assignment operator 
{                                    // 00000000 00000000 00000000 00000001  <--- 1
				     // 11111111 11111111 11111111 11111110  <--- 1's complement
	int i = -1;                  //+                                  1  <--- 2's complement
	printf("%d %u\n",i,i);       //--------------------------------------
}				     // 11111111 11111111 11111111 11111111  <---4G (-1) value
*/

/* compound assignment operator
{
	int x;
	x-=5;  // x=x-5;
	x*=5;  // x=x*5;
	x/=5;  // x=x/5;
	printf("x = %d\n",x);
}*/

/*swapping using third variable/using assignment operator
{
	int n1,n2,temp;
	printf("Enter a two number n1 and n2 : \n");
	scanf("%d %d",&n1,&n2);

	printf("before swap : n1=%d n2=%d\n",n1,n2);
	
	temp=n1;
	n1=n2;
	n2=temp;

	printf("after swap : n1=%d n2=%d\n",n1,n2);
}
*/


