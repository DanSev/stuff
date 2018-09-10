#ifndef STRATEGY_H
#define STRATEGY_H


typedef struct options *customer;

typedef enum
{
		bronze,
		silver,
		gold
}CUSTOMER_TYPE;

customer createCustomer(CUSTOMER_TYPE type);

void deleteCustomer(customer);

double calcPrice(double price, double shipping, customer Customer);

#endif

