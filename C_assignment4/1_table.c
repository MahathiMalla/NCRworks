#include<stdio.h>
int main()
{
	float table[2][3] = { {1.1,1.2,1.3},{2.1,2.2,2.3} };
	
	printf("the table:%d\n", table);
	printf("the (table+1):%d\n", (table+1));
	printf("the *(table+1):%d\n", *(table + 1));
	printf("the meaning of (*(table+1)+1)%f\n", (*(table + 1) + 1));
	printf("is the meaning of (*(table)+1)%d\n", (*(table)+1));
	printf("the value of *(*(table+1) +1)%f\n", *(*(table + 1) + 1));
	printf("the value of *(*(table)+1)%f\n",  *(*(table)+1) );
	printf(" the value of *(*(table+1)%f\n", *(*(table + 1) ));
	printf("the value of *(*(table) + 1)+1:%f\n", *(*(table)+1) + 1 );
	scanf_s("%d", &table);
}
