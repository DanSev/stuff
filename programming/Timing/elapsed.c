#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "elapsed.h"

struct timeBuff 
{
	int size;
	int count;
	char run;
	clock_t start;
	clock_t stop;
	char *activeTask;
	char **taskList;
	double	*taskDurations;

};



tB_handle tB_create(int bufferSize)
{
	tB_handle tBh = malloc(sizeof(*tBh));
	tBh->size = bufferSize;
	tBh->run = 0;
	tBh->count = 0;
	tBh->activeTask = malloc(sizeof(tBh->activeTask)*25);
	tBh->taskList = malloc(sizeof(tBh->taskList) * bufferSize);
	tBh->taskDurations = malloc(sizeof(tBh->taskDurations) * bufferSize); 

	return tBh;
}

void tB_start(tB_handle handle, char *name)
{
	handle->start = clock();
	strcpy(handle->activeTask, name);
}

void tB_stop(tB_handle handle)
{
	float duration = 0;
	
	handle->stop = clock();
	duration = ( (double)(handle->stop - handle->start) ) / CLOCKS_PER_SEC * 1000;
	handle->taskDurations[handle->count] = duration;
	handle->taskList[handle->count] = malloc(sizeof(handle->taskList[0]) * 50);
	strcpy(handle->taskList[handle->count], handle->activeTask);
	handle->count++;
}

void tB_print(tB_handle handle)
{
	int count = handle->count;
	for(int i = 0; i < count; i++)
	{
		printf("%d: %s - %.4fms\n", i, handle->taskList[i], handle->taskDurations[i]);
	}
}


void tB_free(tB_handle handle)
{
	int count = handle->count;

	for(int i = 0; i < count; i++)
	{
		free(handle->taskList[i]);
	}

	free(handle->taskList);
	free(handle->activeTask);
	free(handle->taskDurations);
	free(handle);
}
