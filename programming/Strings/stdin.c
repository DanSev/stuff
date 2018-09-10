#include <stdio.h>

void foo( char* str)
{

	for(; *str != '\0'; str++)
	{
			if (*str == 'o')
			{
					*str = 'O';

			}
	}
}

int main()
{
	char str[100];
	fgets(str, 98, stdin);
	int i = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
			if (str[i] == 'a')
			{
					str[i] = 'A';

			}
	}
	printf("%s", str);
	foo(str);
	printf("%s", str);
	return 0;
}
