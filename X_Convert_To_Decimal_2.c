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
        int a,b,cnt=0,sum=0;
        scanf("%d",&a);
        while (a!=0)
        {
            b=a%2;
            if(b==1)
            {
                cnt++;
            }
            a=a/2;
        }
        while (cnt--)
        {
           sum=sum+pow(2,cnt);
        }
        
        printf("%d\n",sum);
        
    }
    return 0;
}