#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i<n; i++)
    {
        long long a,fact=1;
        scanf("%lld",&a);
        while (a!=0)
        {
            /* code */
            fact=fact*a;
            a--;

        }
        printf("%lld\n",fact);
        

    }
    
    return 0;
}