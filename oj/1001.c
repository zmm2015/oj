#include "stdio.h"

int main(int argc, char const *argv[])
{
	long long n;
	while(scanf("%lld",&n)!=EOF)
	{
		long long sum=0;
		sum=(n+1)*n/2;
		printf("%lld\n\n", sum);
	}
	return 0;
}
