#include "stdio.h"

void sort(char &i,char &j)
{
	char temp;
	if(i>=j)
	{
		temp=i;
		i=j;
		j=temp;
	}
}
int main()
{
	char arrylist[3];
	while(1)
	{
		//for (int i = 0; i < 3; ++i)
		//{
			scanf("%c%c%c\n",&arrylist[0],&arrylist[1],&arrylist[2]);
		//}

		for (int i = 0; i < 3; ++i)
		{
			for (int j = i+1; j < 3; ++j)
			{
				sort(arrylist[i],arrylist[j]);
			}
		}
		for (int i = 0; i < 3; ++i)
		{
			printf("%c\n", arrylist[i]);
		}
	}
	return 0;
}
