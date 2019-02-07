#include<stdio.h>
int main()
{
	int on, rvn=0, temp, r,l=0;
	printf("enter the num:");
	scanf_s("%d", &on);
	temp = on;
	while (on != 0)
	{
		r = on % 10;
		rvn = rvn* 10 + r;
	    on = on/10;
	}
	if (rvn = temp)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}