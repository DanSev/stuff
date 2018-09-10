#include <stdio.h>

/*Sytanx für typefs: typdef <Datatype> <Typedef-Name>
 * e.g: typedef int i32;
 */

/* Am Beispiel des Enums
 *
 * A: Klassischer Weg einen Enum zu erstellen:
 * 1: Enum anlegen,
 * 2: Enum Variable deklarieren. Hier muss wie auch beim struct
 *    immer wieder das Schlüsselwort Enum angegeben werden.
 */
/*

enum day
{
		monday,
		thusday,
		wendsday,
		thursday,
		friday,
		saturday,
		sonday
};


enum day termin;
*/



/* B: Weg mit typedef
 * Schüsselwort muss nicht mehr angegeben werden
 * Dennoch blöd: man muss sich immer zwei namen ausdenken.
 * Einen für das enum und einen für den typedef.
 */


/*
enum day
{
		monday,
		thusday,
		wendsday,
		thursday,
		friday,
		saturday,
		sonday
};


typedef enum day DAY;

DAY termin;
*/


/* C: Man braucht nicht zwingend einen Namen für die Struktur/Enum, sondern kann diese direkt
 *    als typedef anlegen. So benötig man nur einen Namen.
 */


typedef enum
{
		monday,
		thusday,
		wendsday,
		thursday,
		friday,
		saturday,
		sonday
}day;

day termin;


int main()
{
		
		termin = monday;
		switch(termin)
		{
				case monday:
						printf("it's monday");
						break;
				case thusday:
						printf("it's thusday");
						break;
				case wendsday:
						printf("it's wendsday");
						break;
				default:
						printf("it's some day");
		}
		return 0;
}
