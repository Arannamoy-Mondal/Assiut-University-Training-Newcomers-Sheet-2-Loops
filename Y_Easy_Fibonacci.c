#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1;
    if(n==1)
      printf("0");
      
    else
    {
        printf("%d %d ",a,b);
        for(int i=2;i<n;i++)
    {
        long long x=a+b;
        printf("%lld ",x);
        a=b;
        b=x;
        
    }
    }
    
    return 0;
}