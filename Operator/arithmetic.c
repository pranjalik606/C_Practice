#include<stdio.h>
void main()

/* modulous % operator will give output remainder in int
{
	int i = 10,j = 2,k;
	k = i % j;
	printf("k = %d\n",k);
}
*/

/* invalid operands to binary % (have ‘float’ and ‘float’) we cannot use modulous operator to float and double in arithmatic operator
{
	float f = 10,j = 2,k;
	k = f % j;
	printf("k = %d\n",k);
}
*/

/*
{
	


}
*/

/*possiblities 1: if both the values are int, the result is also int
{
	int a=17,b=4,c;
	printf("addition is c = %d\n",a+b);
	printf("substraction is c = %d\n",a-b);
	printf("multiplication is c = %d\n",a*b);
	printf("division is c = %d\n",a/b);
	printf("modulous is c = %d\n",a%b);
}
*/


/*possiblities 2: when both operands are floating point type the result is also floating point type
{
	float a=12.4,b=3.1,c;
	printf("addition is c = %.2f\n",a+b);
        printf("substraction is c = %.2f\n",a-b);
        printf("multiplication is c = %.2f\n",a*b);
        printf("division is c = %.2f\n",a/b);
	// The modulus operator cannot be used with floating point number
}
*/


/*possibility 3: when one perand is of integer type and the other is of floating type the resulting value is floating type
{
	 int a=12;
	 float b=2.5,c;
	 printf("addition is c = %.2f\n",a+b);
         printf("substraction is c = %.2f\n",a-b);
         printf("multiplication is c = %.2f\n",a*b);
         printf("division is c = %.2f\n",a/b);

}
*/

//calculator program in arithmatic operator
{
	int a = 10, b = 4, res;
	
	printf("a is %d and b is %d\n",a,b);
	
	res = a + b;
	printf("a + b is %d\n",res);
	
	res = a - b;
	printf("a - b is %d\n",res);

	res = a * b;
	printf("a * b is %d\n",res);

	res = a / b;
	printf("a / b is %d\n",res);

	res = a % b;
	printf("a % b is %d\n",res);
}








