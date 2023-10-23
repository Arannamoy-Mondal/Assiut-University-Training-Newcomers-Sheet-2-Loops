#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int a,cnt=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}