// #include<stdio.h>
// #include<string.h>
// #include<limits.h>
// #include<math.h>
// int main()
// {
//     int n,x,y;
//     long long tc=0;
//     scanf("%d %d %d",&n,&x,&y);
//     for (int i=1;i<=n;i++)
//     {
//         int a=i,a1,a2,a3,nd,sum=0;
//         nd=floor(log10(a))+1;
//         for(int i=nd-1;i>=0;i--)
//         {
//             a1=a/pow(10,i);
//             a2=a1%10;
//             a3=floor(a2);
//             sum=sum+a3;
//             //printf("sum= %d\n",sum);
//         }
//         if(sum>=x && sum<=y)
//         {
//             tc=tc+a;
//         }
//     }
//     printf("%lld",tc);
    
//     return 0;
// }
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,a,b,sum=0;
    scanf("%d %d %d",&n,&a,&b);
    for (int i=1;i<=n;i++)
    {
        
        int a1=i,b1,rem,ns=0;
        while(a1!=0)
        {
            rem=a1%10;
            a1=a1/10;
            ns=ns+rem;
            
        }
        if((ns>=a)&&(ns<=b))
               {
               sum=sum+i;
               }
        
    }
    printf("%d\n",sum);
    
    return 0;
}