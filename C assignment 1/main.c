#include<stdio.h>
	int res = -1;
	int main()
	{
		int a = 10, b = 6;
		res = add(a, b);
		printf("%d",res);
		res = sub(a, b);
		printf("%d", res);
		res = mul(a, b);
		printf("%d", res);
		scanf_s("%d", &res);
		return 0;
}