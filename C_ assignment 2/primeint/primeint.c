#include<stdio.h>
int main()
{
	int low, high, flag, i;
	printf("enter the values:");
	scanf_s("%d%d", &low, &high);
	while (low<high)
	{
		flag = 0;
		for (i = 2; i <= low / 2; i++)
		{
			if (low % 2 == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d", low);
		++low;
	}
	scanf_s("%d",&low);
}