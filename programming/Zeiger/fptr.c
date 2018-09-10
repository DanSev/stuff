#include <stdio.h>


int* add(int a, int b )
{	
	static int res;
	res = a+b;
	return(&res);
}

int main()
{

int*(*fptr)(int, int);

fptr = add;

int *intptr;

intptr = (*add)(5, 7);

printf("Result is %d", *intptr);

return 0;
}



