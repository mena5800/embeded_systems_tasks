#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("number of floors \n");
    scanf("%d",&num);
    for (int i=1; i<=num; i++)
    {
        for (int j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
