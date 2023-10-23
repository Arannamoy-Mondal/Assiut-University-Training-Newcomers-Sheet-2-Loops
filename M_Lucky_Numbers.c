#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int a,b,tc=0;
    scanf("%d %d",&a,&b);
    for (int i=a; i <=b; i++)
    {
        int cnt=0;
        int nd=floor(log10(i))+1;
        for (int j=nd-1;j>=0;j--)
        {
            int i1=i/pow(10,j);
            int i2=i1%10;
            int i3=floor(i2);
            if(i3!=4 && i3!=7)
            {
                cnt++;
            }

            
        }
        if(cnt==0)
        {
            printf("%d ",i);
            tc++;
        }
        
    }
    if(tc==0)
    {
        printf("-1");
    }
    
    return 0;
}