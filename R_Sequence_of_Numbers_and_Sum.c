#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int a,b;
    while (scanf("%d %d",&a,&b))
    {
        if((a<=0)||(b<=0))
        {
            return 0;        
        }
        else if (a>b)
        {
            long long sum=0;
            for (int i =b; i <=a; i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
            printf("sum =%lld",sum);
            
        }
        else
        {
            long long sum=0;
            for (int i =a; i <=b; i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
            printf("sum =%lld",sum);
            
        }
        printf("\n");
        
    }
    
    return 0;
}