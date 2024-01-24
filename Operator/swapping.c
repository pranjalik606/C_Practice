#include<stdio.h>
void main()

/* swapping of two numbers using third variable
{
	int n1,n2,temp;
	printf("Enter a number n1 and n2 : \n");
	scanf("%d %d",&n1,&n2);
	
	printf("Before swap n1=%d and n2=%d\n",n1,n2);
	
	temp = n1;
	n1 = n2;
	n2 = temp;

	printf("after swap n1=%d and n2=%d\n",n1,n2);
}
*/

/* swapping of two numbers using arithmatic operator +,- without using third variable
{
	int n1,n2;
	printf("Enter a number n1 and n2 : \n");
	scanf("%d %d",&n1,&n2);

	printf("Before swap n1=%d and n2=%d\n",n1,n2);

	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;

	printf("after swap n1=%d and n2=%d\n",n1,n2);
}
*/

 /* swapping of two numbers using arithmatic operator *,/ without using third variable
  {
          int n1,n2;
          printf("Enter a number n1 and n2 : \n");
          scanf("%d %d",&n1,&n2);
  
          printf("Before swap n1=%d and n2=%d\n",n1,n2);
  
          n1 = n1 * n2;
          n2 = n1 / n2;
          n1 = n1 / n2;

          printf("after swap n1=%d and n2=%d\n",n1,n2);
  }
 */

 

 /* swapping of two numbers using arithmatic operator +,- without using third variable in single line
  {
          int n1,n2;
          printf("Enter a number n1 and n2 : \n");
          scanf("%d %d",&n1,&n2);
  
          printf("Before swap n1=%d and n2=%d\n",n1,n2);
  
          n1 = n1 + n2 - (n2 = n1);
  
          printf("after swap n1=%d and n2=%d\n",n1,n2);
  }
 */


 /* swapping of two numbers using arithmatic operator *,/ without using third variable in single line
 {
            int n1,n2;
            printf("Enter a number n1 and n2 : \n");
            scanf("%d %d",&n1,&n2);
    
            printf("Before swap n1=%d and n2=%d\n",n1,n2);
    
            n1 = n1 * n2 / (n2 = n1);
            
            printf("after swap n1=%d and n2=%d\n",n1,n2);
 }
 */


 /* swapping of two numbers using xor operator

    {
            int n1,n2;
            printf("Enter a number n1 and n2 : \n");
            scanf("%d %d",&n1,&n2);
    
            printf("Before swap n1=%d and n2=%d\n",n1,n2);
    
            n1 = n1 ^ n2;
	    n2 = n1 ^ n2;
            n1 = n1 ^ n2;
            
            printf("after swap n1=%d and n2=%d\n",n1,n2);
    }
 */

 
