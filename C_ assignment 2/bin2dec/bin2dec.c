#include<stdio.h>
int main()
{
	int d = 0, r, base = 1,num;
	printf("enter the binary num:\n");
	scanf_s("%d", &num);
	while (num > 0)
	{
		r = num % 10;
		d = d + r*base;
		num = num / 10;
		base = base * 2;
	}
	printf("the dec is:%d", d);
	scanf_s("%d", &d);
}
