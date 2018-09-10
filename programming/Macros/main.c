#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  FAIL() printf("\nfailure in %s() line %d\n", __func__, __LINE__)
#define _ASSERT(test) do{if(!(test)){FAIL(); return 1;}} while(0)

#define _EQUALMEM(PTR, ARRAY) (!(memcmp(PTR, ARRAY, sizeof(ARRAY))))

int square(int val)
{
		
		return val*val;
}


int main()
{
	int a, b, c = 3;

	printf("a = %d, b = %d, c = %d\n", a, b, c);

	int e, f, g;
	e = f = g = 5;
	

	printf("e = %d, f = %d, g = %d\n", e, f, g);
	
	int testy[] = {1, 3, 5, 7};
	int testy2[] = {3, 4, 55, 3};

	int *ptr = testy;
	int *ptr2 = testy2;

	printf("size of array = %d\n", sizeof(testy));

	
	_ASSERT(_EQUALMEM(ptr, testy));
	_ASSERT(_EQUALMEM(ptr2, testy2));
	_ASSERT(_EQUALMEM(ptr, testy2));


	_ASSERT(square(3) == 9);
	_ASSERT(square(3) == 8);

	return EXIT_SUCCESS;
}


