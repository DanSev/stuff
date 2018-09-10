#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "elapsed.h"
#include <unistd.h>

void prnt(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{	
		printf("%d: %d\n", i, arr[i]);
	}
}


int func(const void *a, const void *b)
{
	int aa = *(int*)a;
	int bb = *(int*)b;

	if(aa > bb)
	{
		return 1;
	}
	return 0;
}



int main()
{
	tB_handle dur = tB_create(10);

	char timeStr[30] = {0};	
	time_t zeit = 0;
	

	time_t zeit2 = time(NULL);

	time(&zeit);

	struct tm *fZeit = {0};

	fZeit = localtime(&zeit);

	printf("%d/%d/%d\n", fZeit->tm_mday, fZeit->tm_mon+1, 1900+fZeit->tm_year);

	char *t = asctime(fZeit);

	printf("%s\n", t);

	int array[100000] = {0};

	for(int i = 0; i < 100000; i++)
	{
		array[i] = rand();
	}

	tB_start(dur, "Print-1");
	prnt(array, 100000);
	tB_stop(dur);
	tB_start(dur, "QSort");
	qsort(array, 100000, sizeof(*array), func);
	tB_stop(dur);
	tB_start(dur, "Print-2");
	prnt(array, 100000);
	tB_stop(dur);
	tB_print(dur);
	tB_free(dur);
	return 0;
}
