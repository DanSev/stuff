#include <stdio.h>
#include "strategy.h"


		         
int main()
{


	customer cust1 = createCustomer(bronze);
	customer cust2 = createCustomer(silver);
	customer cust3 = createCustomer(gold);


	double price1 = calcPrice(10, 5, cust1);
	double price2 = calcPrice(10, 5, cust2);
	double price3 = calcPrice(10, 5, cust3);
	
	
	printf("price1 = %f\n", price1);
	printf("price2 = %f\n", price2);
	printf("price3 = %f\n", price3);


	deleteCustomer(cust1);
	deleteCustomer(cust2);
	deleteCustomer(cust3);

	return 0;
}
