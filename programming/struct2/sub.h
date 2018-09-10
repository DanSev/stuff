#ifndef SUB_H
#define SUB_H

typedef struct addrs* addr_ptr;


addr_ptr createElement(int alter, int gewicht);

int getAlter(addr_ptr ptr);
int getGewicht(addr_ptr ptr);

#endif 
