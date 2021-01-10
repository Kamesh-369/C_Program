#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int no1,no2,sum,diff;
    float num1,num2,sum1,diff2;
    scanf("%d %d",&no1,&no2);
    scanf("%f %f",&num1,&num2);
    sum=no1+no2;
    diff=no1-no2;
    sum1=num1+num2;
    diff2=num1-num2;
    printf("%d %d\n",sum,diff);
    printf("%.1f %.1f",sum1,diff2);


    return 0;
}
