#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        /* code */
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
    
    return 0;
}