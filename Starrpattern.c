#include<stdio.h>
int main()
{
    int n,row,col,spc;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(spc=row;spc<n;spc++)
        {
            printf(" ");
        }
        for(col=1;col<=n;col++)
        {
            printf("*");
        }
        printf("\n");
         
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
