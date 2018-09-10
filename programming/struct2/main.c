#include <stdio.h>
#include "sub.h"


struct info{
		int alter;
		double gewicht;
}Louis;

struct {
		int zahl1;
		int zahl2;
} numbers;

typedef struct info Inf;

int main()
{

	struct info Daniel={32, 75.4};

	printf("Daniel wiegt %f\n", Daniel.gewicht);
	Louis.alter = 12;
	printf("Louis ist %d\n",Louis.alter);
	numbers.zahl1 = 66;
	printf("zahl1 ist %d\n",numbers.zahl1);
	Inf something = {12, 12.4};
	printf("something wiegt %f\n", something.gewicht);
	return 0;
}
