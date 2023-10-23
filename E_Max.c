#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n,max=INT_MIN;
    scanf("%d",&n);
    while (n--)
    {
        int a;
        scanf("%d",&a);
        if(max<a)
        {
            max=a;
        }
    }
    printf("%d",max);
    

    return 0;
}