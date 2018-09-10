#include <stdio.h>
#include "interface.h"


int main()
{
		type Customer = type2;
		double price = 100;
		double shipping = 10;
		double factor = -1;
		double result = -1;

		interface IF = createInterface(Customer);

		result = IF->calculate(price, shipping);
		factor = IF->getFactor();

		printf("result = %f\n", result);
		printf("factor = %f\n", factor);

		return 0;
}


