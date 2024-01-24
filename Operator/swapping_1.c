/*#include<stdio.h>

#define swap 

int main()  
{  
    int a, b;  
  
    printf("Enter values for a and b\n");  
    scanf("%d%d", &a, &b);  
  
    printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
  
    swap(a, b);  
  
    return 0;  
}  
  
void swap(int x, int y)  
{  
    int temp;  
  
    temp = x;  
    x    = y;  
    y    = temp;  
  
    printf("\nAfter swapping: a = %d and b = %d\n", x, y);  
}  
*/




#include <stdio.h>

#define SWAP(a, b) { int temp = a; a = b; b = temp; }

int main() {
    
    int x , y;


	printf("Enter The Numbers for Swapping:");
	scanf("%d %d",&x,&y);
    
	printf("Before swapping: x = %d, y = %d\n", x, y);

    SWAP(x, y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

