#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n; i++)
    {
        int a,b,sum=0;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            for (int i=b+1;i<a; i++)
            {
                if(i%2!=0)
                {
                    sum=sum+i;
                }
            }
            printf("%d\n",sum);
            
        }
        else
        {
            for (int i=a+1;i<b; i++)
            {
                if(i%2!=0)
                {
                    sum=sum+i;
                }
            }
            printf("%d\n",sum);
            
        }
    }
    
    return 0;
}