
#include <stdio.h>
#include "mylib.h"

void printcaps(char *text)
{
		printf("%s\n",text);
		struct id id1 = {"Daniel", 24};
		printf("%s\n",id1.name);
}

void printnum(int num)
{
		printf("%d\n",num);
}

int returnEleven()
{
		return 11;
}
