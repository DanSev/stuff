#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/*MARCROS defined in sdtarg.h
 * va_list
 * va_start
 * va_arg
 * va_end
 * va_copy
 */

/* Funktionsparameter werden, bevor sie an die Funktion übergeben werden,
 *  automatisch nach folgendem Schema in größere Typen umgewandelt
 *  char, signed char, short --> int
 *  unsigned char, unsigned short --> unsigned int
 *  float --> double
 */

int sumInt(int argCount, ...)
{
		int sum = 0;
		va_list argPtr;
		va_start(argPtr, argCount);
		printf("argCount = %d\n", argCount);

		for(argCount; argCount > 1 ; argCount--)
		{
				sum += va_arg(argPtr, int); //Inkrementiert argPtr zum nächsten Argument.
		}
		
		va_end(argPtr);

		return sum;
}

void type(int argCount, ...)
{
		va_list argPtr;
		va_start(argPtr, argCount);


char *d = malloc(100 * sizeof(char));

		for(int i = 0; i < argCount; i++)
		{
				switch(i)
				{
						case 0:
								{
							    int a = va_arg(argPtr, int);
								printf("1. arg = int = %d\n", a);
								break;
								}

						case 1:
								{		
							   	double b = va_arg(argPtr, double);
								printf("2. arg = double = %f\n", b);
								break;
								}

						case 2:
								{
								int a = va_arg(argPtr, int); //Das MACRO wandelt char immer in int um;
								char c = (char)a;
								printf("3. arg = char = %c\n", c);
								break;
								}

						case 3:
								d = va_arg(argPtr, char* );
								printf("4. arg = string = %s\n", d);
								break;
						default:
							printf("unknown");
				}
		}
}

int main()
{
		int sum = sumInt(5, 1, 7, 9, 3, 5);
		printf("sum = %d\n", sum);

		type(3, 5, 2.32, 'A');


		return 0;
}



