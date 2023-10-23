#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int a,a1,rem,sum=0;
    scanf("%d",&a1);
    a=a1;
    while (a!=0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    printf("%d\n",sum);
    if(sum==a1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    return 0;
}