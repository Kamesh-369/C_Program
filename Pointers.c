#include <stdio.h>

void update(int *a,int *b)
{
    // Complete this function
    int *a1,*b1;
    *a1=*a;
    *b1=*b;
    *a=*a1 + *b1;
    *b=*a1 - *b1;

}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    if(b<0)
    {
    printf("%d\n%d", a, (b*-1));
    }
    else
    {
     printf("%d\n%d", a,b);
    }

    return 0;
}
