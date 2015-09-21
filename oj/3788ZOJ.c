#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[])
{
	char c[1010];
	int suma=0,sumb=0,sumc=0,flag=0;
	while(scanf("%s",&c)!=EOF)
	{
		suma=0,sumb=0,sumc=0,flag=0;
		for(int i=0;i<strlen(c);i++)
		{
			if(flag==0 && c[i]=='o')
			{
				suma++;
			}
			else if(flag==0)
			{
				flag=1;
			}
			if(flag==1 && c[i]=='o')
			{
				sumb++;
			}
			else if(flag==1)
			{
				flag=2;
			}
			if(flag==2 && c[i]=='o')
			{
				sumc++;
			}

		}
		printf("%d%d%d\n",suma,sumb,sumc );
		if(sumb*suma==sumc)
		{
			printf("Accepted\n");
		}
		else
		{
			printf("Wrong Answer\n");
		}

	}
	return 0;
}