#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int n;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
       int j;
       scanf("%d",&j);
       for (int i=1;i<=j;i++)
       {
        printf("%c",ch);
       }
       printf("\n");
       

       
    }
    
    return 0;
}