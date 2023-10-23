#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        int a1=a;
        do
        {
            int rem=a1%10;
            printf("%d ",rem);
            a1=a1/10;
        }
        while (a1!=0);
        printf("\n");
        
    }
    return 0;
}