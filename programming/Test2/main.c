#include <stdio.h>
#include <stdlib.h>

int *y_ptr = NULL;

void foo(int *ptr)
{
		*ptr = 10;
}

void bar(int **ptr)
{
		*ptr = y_ptr;
}

int main()
{
		int x = 2;
		int y = 1;


		int *x_ptr = &x;
		y_ptr = &y;

		printf("*x_ptr = %d, *y_ptr = %d\n", *x_ptr, *y_ptr);
		foo(&x);
		bar(&x_ptr);
		printf("x  ist jetzt %d\n", x);
		printf("*x_ptr = %d, *y_ptr = %d\n", *x_ptr, *y_ptr);
		return EXIT_SUCCESS;
}

