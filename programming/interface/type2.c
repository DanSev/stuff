#include <stdio.h>
#include <stdlib.h>
#include "interface.h"


static double Calculate(double price, double shipping)
{
		return 0.90 * price + shipping;
}
/*
double GetFactor()
{
		printf("GetFactor of Type1 called\n");
		return 0.95;
}
*/



void createType2(interface newInterface)
{
		newInterface->calculate = Calculate;
}

