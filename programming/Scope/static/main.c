#include <stdio.h>
#include "func.h"


/* Globale Variale: Überall sichtbar wenn sie in anderen Files via "extern" bekannt gemacht wird.
 */
int global = 5;

/* "Globale Variable" die ausschließlich in dieser Datei sichtbar ist.
 * In anderen Files kann sie nicht via "extern" gefunden werden.
 */
static int static_global = 3;	



int main()
{
	func();
	return 0;
}


