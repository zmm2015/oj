#include "stdio.h"
int main()
{
	int N,sum;
	while(scanf("%d",&N)!=EOF)
	{
		sum=0;
		int a[N];
		for (int i = 0; i < N; ++i)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
