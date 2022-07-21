#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i =1 ; i<=12; i++)
    {
        printf("table of %d\n\n",i);
        for(int j=i; j<=12; j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);

        }
        printf("\n");
    }
    return 0;
}
