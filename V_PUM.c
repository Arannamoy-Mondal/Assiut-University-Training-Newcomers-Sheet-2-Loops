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
        for (int j=1+(i-1)*4;j<=(1+(i-1)*4+2); j++)
        {
            printf("%d ",j);
        }
        printf("PUM\n");
        
    }
    return 0;
}