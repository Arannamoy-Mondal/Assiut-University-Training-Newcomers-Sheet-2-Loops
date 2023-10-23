#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main()
{
    int a,b,a1,b1,rem;
    scanf("%d %d",&a,&b);
    a1=a;
    b1=b;
    while (b1!=0)
    {
        rem=a1%b1;
        a1=b1;
        b1=rem;


    }
    printf("%d",a1);
    

    return 0;
}