#include <stdio.h>

int main()
{


int VAR = 5;

int *PTR;

PTR = &VAR;

printf("*PTR = %d\n", *PTR);


*PTR = 10;
printf("VAR ist jetzt: %d\n", VAR);

printf("Der Pointer PTR mit der Adresse %p, zeigt auf den \n\
Speicherbereich %p. Dort liegt der Wert %d. Das ist \n\
der gleiche Wert den auch VAR hat: %d. Kein Wunder, \n\
weil VAR liegt auf den Speicher auf den PTR zeigt %p"\
, &PTR, PTR, *PTR, VAR, &VAR);

return 0;
}
