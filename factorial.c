#include<stdio.h>
int main()
{
  long long n,i;
  scanf("%lld",&n);
  for (i=1;i<=n; i++)
  {
    long long a,e=1;
    scanf("%lld",&a);
    while (a!=0)
  {
    e=e*a;
    a=a-1;
   }
   printf("%lld\n",e);
    
  }
  
 
  
  
    return 0;
}
