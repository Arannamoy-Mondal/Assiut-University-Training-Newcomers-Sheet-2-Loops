#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            cnt++;
        }
    }
    if(cnt==0)
    {
        printf("-1");
    }
    return 0;
}