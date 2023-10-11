#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,n2,n3,n4,nd;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&n1);
        nd=ceil(log10(n1));
        n4=n1;
        // printf("%d",nd);
        do
        {
            printf("%d ",n4%10);
            n4=n4/10;
        }
        while (n4!=0);
        
        
        printf("\n");
        
        


    }
}