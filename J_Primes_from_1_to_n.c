#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i =2; i <=n; i++)
    {
        int cnt=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                cnt++;
            }
        }
        if(cnt==2)
        {
            printf("%d ",i);
        }
        cnt=0;
        
    }
    
    return 0;
}