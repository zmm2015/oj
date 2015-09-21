#include "stdio.h"
int main(int argc, char const *argv[])
{
	int N,A,B;
	scanf("%d",&N);
	while(N>0)
	{
		scanf("%d%d",&A,&B);
		printf("%d\n",A+B);
		N--;
	}
	return 0;
}