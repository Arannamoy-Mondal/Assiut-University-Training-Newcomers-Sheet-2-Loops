#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}