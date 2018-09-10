#include <stdio.h>
#include "sub.h"


int main()
{
  addr_ptr Danny = createElement(12 ,55);
	

  printf("Danny ist %d Jahre alt\n", getAlter(Danny));
  printf("Danny wiegt: %d\n", getGewicht(Danny));
  return 0 ;
}

