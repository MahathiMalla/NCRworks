#include<stdio.h>
int main()
{
	int fact = 1, n, i;
	printf("enter the num:\n");
	scanf_s("%d", &n);
	while (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			fact = fact*i;
		}
		printf("the factorial:%d", fact);
		scanf_s("%d", &fact);
	}
}