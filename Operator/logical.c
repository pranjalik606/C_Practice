#include<stdio.h>
void main()

/*these operators return  for false(0) and true(1) means non-zero value
{
	int i=10,j=20,k;
	k=i&&j;        // k=10&&20 ---> k=1&&1 ---> k=1
	printf("k=%d\n",k);
}
*/

{
	int i=100,j=-20,k;
	k=i&&j;          // k=100&&-20 --> k=1&&1 --> k=1
	printf("k=%d\n",k);
}


