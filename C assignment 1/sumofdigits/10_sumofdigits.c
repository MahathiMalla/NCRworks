#include<stdio.h>
int main()
{
	int num, sum = 0, rem;
	printf("enter the number:\n");
	scanf_s("%d", &num);
	while (num != 0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	printf("%d", sum);
	scanf_s("%d", &sum);
}