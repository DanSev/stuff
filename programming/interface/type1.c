#include <stdio.h>
#include <stdlib.h>
#include "interface.h"


static double Calculate(double price, double shipping)
{
		return 0.95 * price + shipping;
}

static double GetFactor()
{
		return 0.95;
}




void createType1(interface newInterface)
{
		newInterface->calculate = Calculate;
		newInterface->getFactor = GetFactor;

}

