#include<stdio.h>
void main()
{
    long long int n,i,j,prime[10000];
    printf("enter the number:");
    scanf("%lld",&n);
    for(i=1;i<n;i++)
        prime[i]=i;
    for(i=2;i*i<n;i++)
        if(prime[i]!=0)
            for(j=2*i;j<n;j+=i)
            prime[j]=0;
    for(i=2;i<n;i++)
        if(prime[i]!=0)
        printf("%lld\n",prime[i]);
}
