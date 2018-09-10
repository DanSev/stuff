#include <stdio.h>
#include <stdlib.h>
#include "interface.h"
#include "type1.h"
#include "type2.h"

double defaultCalculate(double price, double shipping)
{
		printf("Calculate not implemented\n");
		return 0;
}

double defaultGetFactor()
{
		printf("getFactor not implemented\n");
		return 0;
}




interface createInterface(type interfaceType)
{
		interface newInterface = malloc(sizeof(*newInterface));

		if(NULL != newInterface)
		{
				newInterface->calculate = defaultCalculate;
				newInterface->getFactor = defaultGetFactor;

				switch(interfaceType)
				{
						case type1:
								createType1(newInterface);
								break;
						case type2:
								createType2(newInterface);
								break;											
						default:

								printf("unknown type\n");
				}

		}
		return newInterface;
}

