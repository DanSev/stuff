#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
		int x2;
		int x3;
}pot;



void potenceInt(const void *element, void *newElement)
{
		int x =*(int*)element;
		pot *result = newElement;
		result->x2 = x * x;
		result->x3 = x * x * x;
}


void nameTxt(const void *element, void *newElement)
{
		int x =*(int*)element;
		char *txt = malloc(sizeof(*txt * 10));
		char **tmp = newElement;

		switch(x)
		{
				case 1: strcpy(txt, "Eins");
						break;
				case 3: strcpy(txt, "Drei");
						break;
				case 5: strcpy(txt, "Fünf");
						break;
				case 10:strcpy(txt, "Zehn");
						break;
				default:strcpy(txt, "Unknown");
		}
		*tmp = txt;
}


void* map(void *array, int num, int oldSize, int newSize, void(*func)(const void*, void*))
{
		char *newArray = malloc(newSize * num);
		char *newElement = malloc(newSize);


		for(int i = 0; i < num; i++)
		{	
 
				func(array + (i*oldSize), newElement);
				
				for(int j = 0; j < newSize; j++)
				{
					newArray[newSize*i+j] = newElement[j];
				}
		}

		free(newElement);
		return newArray;
}		
				

int main()
{
		int arr[] = {1, 3, 5, 3, 10};
		
		char **txt  = NULL;

		pot *res = NULL;

		res = map(arr, 5, sizeof(*arr), sizeof(*res), potenceInt);

		for(int i = 0; i < 5; i++)
		{
				printf("Idx %d: orig = %d, x2 = %d, x3 = %d\n",i ,arr[i], res[i].x2, res[i].x3);
		}

		txt = map(arr, 5, sizeof(*arr), sizeof(*txt), nameTxt);

		for(int i = 0; i < 5; i++)
		{
				printf("%s\n", txt[i]);
		}

		return 0;
}










