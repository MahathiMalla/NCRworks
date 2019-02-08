#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[30];
	printf("the string is:");
	gets(str);
	
	for (i = 0; i <= strlen(str); i++)
	{
		
		if (str[i] >= 65 && str[i] <= 91)
		{
			
			str[i] = str[i] + 32;
			
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			
		}
		
	}
	puts(str);
	gets(str);
	
}