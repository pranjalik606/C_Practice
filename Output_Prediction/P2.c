#include <stdbool.h>
#include <stdio.h>
int main()
{
    int a = 10, b = 4;
    bool res = ((a != b) || printf("GeeksQuiz"));
    printf("%d\n",res);
    return 0;
}
