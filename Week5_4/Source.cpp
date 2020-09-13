#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num,a,b,c;
	scanf("%d", &num);
	for (a = 0; a < num; a++)
	{
		for (b = 0; b < num; b++)
		{
			c = a + b;
			if (c % 2 == 0)
			{
				printf("x");
			}
			else
			{
				printf("o");
			}
		}
		printf("\n");
	}
	return 0;
}