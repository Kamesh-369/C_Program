#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    n=n*2-1;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(col==row||col==(n-row+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}