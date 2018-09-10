#include <stdio.h>
#include <stdlib.h>


typedef struct
{
		int alter;
		int gewicht;
}*person;


person daniel;


int main()
{
		daniel = malloc(sizeof(*daniel));

		daniel->alter = 12;
		daniel->gewicht = 60;

		printf("daniel is %d, his weigt is %d\n", daniel->alter, daniel->gewicht);
		return 0 ;
}

