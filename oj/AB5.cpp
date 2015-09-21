#include "stdio.h"

int main(int argc, char const *argv[])
{
	int total,N,sum;
	scanf("%d",&total);
	while(total--)
	{
		scanf("%d",&N);
		int a[N];
		sum=0;
		for (int i = 0; i < N; ++i)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		if(total!=0)
			printf("%d\n\n", sum);
		else
			printf("%d\n",sum);
	}
	return 0;
}