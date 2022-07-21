#include <stdio.h>
#include <stdlib.h>

int main()
{
    char space = 32;
    int num = 10;
    for (int i =0 ; i<=10; i++)
    {
        for (int z = 0; z<num; z++)
        {
            printf("%c",space);
        }
        printf("*");
        num--;
        for(int j=0 ; j<i; j++)
        {
            printf("**");

        }
        printf("\n");
    }
    return 0;
}
