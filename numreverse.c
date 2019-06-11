#include<stdio.h>
int main()
{
long long int n,rev=0,x;
scanf("%lld",&n);
while(n>0)
{
	x=n%10;
rev=rev*10+x;
n/=10;
}
printf("%lld",rev);
}
