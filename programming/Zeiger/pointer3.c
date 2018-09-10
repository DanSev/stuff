#include <stdio.h>


/* Read-Only-Zeiger: Auf Zeiger darf nu lesend zugegriffen werden.
 * Gute Möglichkeit um dem Anwender einer Funktion schon mit dem
 * Header zu zeigen was in der Funtion passiert.
 */

void foo(const char *ptr)
{	
	/* Schreibzugriff: Compiler würde meckern.	
	 *   *ptr = 'A';
	 */
	
	/* Lesen ist erlaub
	 */
	char c = *ptr;	
	printf("%c\n",*ptr);
 }
/* Restrict-Zeiger zeigt, das der Speicherbereich des Zeigers NUR mit diesem Zeiger verwendet wird.
 * Heißt z.B das der Speicherbereich nicht mit dem eines weiteren Zeigers überlappen darf.
 * Restrict ist ein reines Versprechen an den Compiler. Es gibt keine Fehlermeldungen zur Compilezeit.
 * Retrict erst ab c99 Standard. Für GCC: gcc -std=c99
 */

void bar(char * restrict  ptr)
{
	printf("%s\n", ptr );
}	

int main()
{

char Name[] = "Peter";
foo(Name);
bar(Name);

return 0 ;
}
