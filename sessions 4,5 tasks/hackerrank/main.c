#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1,num2;
    float num3,num4;
    scanf("%i %i %f %f",&num1,&num2,&num3,&num4);
    printf("%i %i\n%.1f %.1f",num1+num2,num1-num2,num3+num4,num3-num4);
    return 0;
}
