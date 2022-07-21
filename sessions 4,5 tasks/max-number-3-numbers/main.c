#include <stdio.h>
#include <stdlib.h>

float max(float num1,float num2,float num3);

int main()
{
    float num1,num2,num3;
    scanf("%f %f %f",&num1,&num2,&num3);

    printf("%.1f",max(num1,num2,num3));
    return 0;
}

float max(float num1,float num2,float num3)
{
    float max = num1;
    if (max<num2)
        max = num2;

    if (max<num3)
        max = num3;

    return max;
}

