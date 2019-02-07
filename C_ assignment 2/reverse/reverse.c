#include<stdio.h>
int main()
{
	int rnum = 0, rem, num;
	printf("enter the num:");
	scanf_s("%d", &num);
	while (num != 0)
	{
		rem = num % 10;
		rnum = rnum * 10 + rem;
		num /= 10;
	}
	printf("reversed number=%d", rnum);
	scanf_s("%d", &rnum);
}