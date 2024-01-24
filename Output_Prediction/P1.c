/*
#include<stdio.h>
#include<string.h>
 
#define NUMBER  1
#define BIT 0
 
int main(void)
 
{
 
    char p[10]="pranjali";
    int i;
 
 
    for(i=0; i<=strlen(p); ++i)
    {
 
        if((NUMBER ^ 1<<BIT))
        printf("%c ",p[i]);
    }
 
}
*/


#include<stdio.h>
#include<string.h>
 
#define NUMBER  1
#define BIT 0
 
int main(void)
 
{
 
    char p[10]="pranjali";
    int i;
 
 
for(i=0;i <=strlen(p);++i)
 
{
 
if((NUMBER | 1<<BIT))
    printf("%c ",p[i]);
}
return 0; 
 
}


/*
#include<stdio.h>
#include<string.h>
 
#define NUMBER  1
#define BIT 0
 
int main(void)
 
{
 
    char p[10]="pranjali";
    int i;
 
 
for(i=0;i <=strlen(p);++i)
 
{
 
if((NUMBER & ~(1<<BIT)))
    printf("%c ",p[i]);
}
 
 
}
*/
