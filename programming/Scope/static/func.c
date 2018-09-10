#include <stdio.h>


/* Bekannt machen der globalen Variablen aus einer anderen Datei mir "extern"
 */
extern int global;

/* Mit der als static markierten Variable aus main.c geht dies nicht. Diese Variable ist nur in
 * main.c sichtar. Der Compiler bzw. genauer der Linker wirft einen Fehler, weil er die versprochene
 * Variable nirgendwo finden kann.
 */
extern int static_global;

void func()
{
		printf("global = %d\n", global);
	//	printf("static_global = %d\n", static_global); // Linker-Error
}
