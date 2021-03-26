#include<stdio.h>
int main()
{
    int n,row,col,val;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row%2==1&&col%2==1)
                printf("1");
            else if(row%2==1 && col%2== 0)
                printf("0");
            else if(row%2==0 && col%2==0 )
                printf("1");
            else
                printf("0");
        }
        printf("\n");
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}