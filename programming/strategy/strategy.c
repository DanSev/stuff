#include <stdio.h>
#include <stdlib.h>
#include "strategy.h"

typedef double (*algorithm)(double, double);

struct options
{
	 algorithm calc;
};


double bronzeCustomer(double price, double shipping)
{
		return price * 0.95 + shipping;
}

double silverCustomer(double price, double shipping)
{
		return price * 0.9 + shipping;
}

double goldCustomer(double price, double shipping)
{
		return price * 0.85 ;
}


customer createCustomer(CUSTOMER_TYPE type)
{
	customer newCustomer = malloc(sizeof(*newCustomer));

	switch(type)
	{
			case 0:	newCustomer->calc = bronzeCustomer;
					break;
			case 1: newCustomer->calc = silverCustomer;
					break;
			case 2: newCustomer->calc = goldCustomer;
					break;
			default:newCustomer = NULL;
	}

	return newCustomer;
}

void deleteCustomer(customer cust)
{
		free(cust);
}


double calcPrice(double price, double shipping, customer Customer)
{
	return	Customer->calc(price, shipping);
}


