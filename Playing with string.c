#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int MAX_LEN = 50;
int main() 
{
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*s", sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);   
    return 0;
}