#include "stdio.h"
int main(int a,char *c[])
{
	int N;
	while(scanf("%d",&N)!=EOF&&N!=0)
	{
		int a[N],sum=0;
		for (int i = 0; i < N; ++i)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		printf("%d\n", sum);

	}
	return 0;
}
