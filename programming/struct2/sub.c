#include <stdio.h>
#include <stdlib.h>
#include "sub.h"



struct addrs{
	int alter;
   	int gewicht;
};

addr_ptr createElement(int alter, int gewicht)
{	
	struct addrs *return_ptr = malloc(sizeof(struct addrs));
	(*return_ptr).alter = alter;
	(*return_ptr).gewicht = gewicht;
	return return_ptr;
}

int getAlter(addr_ptr ptr)
{
		return(*ptr).alter;
}

int getGewicht(addr_ptr ptr)
{
		return(*ptr).gewicht;
}
