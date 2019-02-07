#include <stdio.h>

int main()
{
	int num, i = 0, hex[10], r, j;
	printf("enter the binary num:\n");
	scanf_s("%d", &num);
	while (num>0)
	{
		r = num % 16;
		num = num / 16;
		if (r <= 9)
		{
			hex[i] = 48 + r;
			i++;
		}
		else
		{
			hex[i] = 55 + r;
			i++;
		}
	}
	for (j = i - 1; j > 0; j--)
	{
		printf("%c", hex[j]);
	}
	scanf_s("%d", &num);
}