#include <stdio.h>
/* Globale Variable ist überall gültig
 */
int global_var = 0;

/* Static wird benutzt für ewig währende Variablen mit lokaler Gültigkeit.
 * Die Initialisierung wird dabei nur beim ersten Aufruf vorgenommen (var = 5).
 * Wurde die Funktion bereits voher einmal aufgerufen gilt der bereits 
 * bestehende Wert
 */
void func1()
{	
	static var = 5;
	printf("func1:static var = %d\n",var);
	printf("global_var = %d\n",global_var);
	var ++;
	global_var ++;
}


void func2()
{	
	static var = 1;
	printf("func2:static var = %d\n",var);
	printf("global_var = %d\n",global_var);
	var ++;
	global_var ++;
}

int main()
{
	func1();
	func2();
	func1();
	func2();
	func1();
	func2();
return 0;
}	
