#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i-1;j>=0;j--)
        {
            printf(" ");
        }
        for(int k=(2*i)-2;k>=0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}