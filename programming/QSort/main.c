#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int alter;
	int gewicht;
} cluster;


typedef cluster *assembly;



int compare(const void *elem1, const void *elem2)
{

	assembly as1, as2;

	as1 = (assembly)elem1;
	as2 = (assembly)elem2;

	if( as1->gewicht > as2->gewicht )
	{
			return 	1;
	}
	return 0;
}

int compare2(const void *elem1, const void *elem2)
{

	assembly as1, as2;

	as1 = (assembly)elem1;
	as2 = (assembly)elem2;

	if( as1->alter < as2->alter )
	{
			return 	1;
	}
	return 0;
}




int main()
{
	const int SIZE = 4;	
	assembly array = malloc(sizeof(*array)* SIZE);

	array[0].alter = 23;
	array[0].gewicht = 82;
	array[1].alter = 24;
	array[1].gewicht = 52;
	array[2].alter = 13;
	array[2].gewicht = 62;
	array[3].alter = 23;
	array[3].gewicht = 72;


	

	for(int i = 0; i < SIZE; i++)
	{
			printf("1: Alter = %d, Gewicht = %d\n", array[i].alter, array[i].gewicht);
	}


	qsort(array, 4, sizeof(*array), compare);

	printf("\n\n");

	for(int i = 0; i < SIZE; i++)
	{
			printf("1: Alter = %d, Gewicht = %d\n", array[i].alter, array[i].gewicht);
	}

	qsort(array, 4, sizeof(*array), compare2);

	printf("\n\n");

	for(int i = 0; i < SIZE; i++)
	{
			printf("1: Alter = %d, Gewicht = %d\n", array[i].alter, array[i].gewicht);
	}
	return 0;
}


