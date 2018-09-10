#ifndef INTERFACE_H
#define INTERFACE_H


#include <stdio.h>


typedef enum
{
		type1,
		type2
} type;

typedef double (*func_calculate)(double price, double shipping);

typedef double (*func_getFactor)();


typedef struct 
{
		func_calculate calculate;
		func_getFactor getFactor;
} *interface;


interface createInterface(type interfaceType);


#endif
