#ifndef _TDD_H_
#define _TDD_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  FAIL() printf("\nfailure in %s() line %d\n", __func__, __LINE__)
#define _ASSERT(test) do{if(!(test)){FAIL(); return 1;}} while(0)

#define _NOT_NULL(PTR) (PTR != NULL)
								

#define _EQUALMEM(PTR, ARRAY) (!(memcmp(PTR, ARRAY, sizeof(ARRAY))))


#endif /*_TDD_H */

