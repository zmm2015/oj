#include "stdio.h"
#include "string.h"

int charToInt(char c)
{
	//把字符转成数字
	int num;
	if (c>='0'&&c<='9')
	{
		num=c-'0';
	}
	if (c>='a'&&c<='f')
	{
		num=c-'a'+10;
	}
	if (c>='A'&&c<='Z')
	{
		/* code */
		num=c-'A'+10;
	}
	return num;
}
int shift(char s[])
{
	//把16进制字符串s转换成十进制数据
	int jinzhiS=0,d=1;
	for (int i = strlen(s)-1; i >=0; --i)
	{
		jinzhiS=charToInt(s[i])*d+jinzhiS;	
		d=d*16;
	}
	return jinzhiS;
}
int main()
{
	char A[100],B[100];
	int sum=0,jinzhiA,jinzhiB;
	while(scanf("%s%s",&A,&B)==2)
	{
		jinzhiA=shift(A);
		jinzhiB=shift(B);
		printf("%d\n",jinzhiA+jinzhiB);
	}
	return 0;
}