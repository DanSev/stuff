#include <stdio.h>



int main()
{
		int x = 8;
		char text[] = "Hallo Welt";

		void *ptr;

		ptr = &x;
		printf("x = %d\n", *(int*)ptr);

		ptr = text;
		printf("text is %s\n",(char*) ptr);

		printf("First Char is %c\n", *(char*)ptr);

		return 0 ;
}
