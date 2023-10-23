#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,even=0,odd=0,pos=0,neg=0;
    scanf("%d",&n);
    for (int i =0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        if(a<0)
        {
            neg++;
        }
        if(a>0)
        {
            pos++;
        }
        if(a%2==0)
        {
            even++;
        }
        if(a%2!=0)
        {
            odd++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
    
    return 0;
}