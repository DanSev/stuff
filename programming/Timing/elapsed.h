#ifndef ELAPSED_H_
#define ELAPSED_H_

typedef struct timeBuff *tB_handle;

tB_handle tB_create(int bufferSize);

void tB_start(tB_handle handle, char *name);

void tB_stop(tB_handle handle);

void tB_print(tB_handle handle);

void tB_free(tB_handle handle);


#endif 
