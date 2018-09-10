#include <stdio.h>
#include <string.h>

/* Definition einer Structur. Noch keine "Instanz" erzeugt
 */
struct id
{
			char name[20];
			int alter;
};

/* Definition einer Struktur und gleichzeitiges Erzeugen von "Instanzen".
 */
struct zweiint
{
		int eins;
		int zwei;
} doppel;


/*Definition ohne Typbezeichner. Nur "Instanziierung".
 */
struct {
		double er;
		int sie;
} familie;





/*Funktion die Struktur-Zeiger übernimmt
 */
void printstruct(struct id *struct_ptr)
{
		printf("Name: %s\n", (*struct_ptr).name);
		printf("Alter: %d\n",(*struct_ptr).alter);
}


int main()
{

	doppel.eins = 5;
	doppel.zwei = 6;
	printf("doppel var 1 = %d, doppel var 2 = %d\n",doppel.eins, doppel.zwei);

	familie.er = 0.4;
	printf("%.3f\n", familie.er);



	struct id Member1;
	
	Member1.alter = 32;
	strcpy(Member1.name, "Hallo Leute");

	printf("name: %s, alter: %d\n", Member1.name, Member1.alter);
	printstruct(&Member1);


	return 0;

}

