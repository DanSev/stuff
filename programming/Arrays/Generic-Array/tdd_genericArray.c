#include "tdd.h"
#include "genericArray.h"



int findDuplicatesInt_01()
{
		int array[] = {1, 3, 4, 3};
		int *dubs = NULL;

		int expect[]  = {3};
		
		_ASSERT(findDuplicatesInt(array, 4, &dubs) == 1);
		_ASSERT(_NOT_NULL(dubs));
		_ASSERT(_EQUALMEM(dubs, expect));

		free(dubs);

		return 0;
}		


int findDuplicatesInt_02()
{
		int array[] = {1, 3, 4, 3};
		int *dubs = NULL;

		int expect[]  = {1};
		
		_ASSERT(findDuplicatesInt(array, 4, &dubs) == 1);
		_ASSERT(_NOT_NULL(dubs));
		_ASSERT(_EQUALMEM(dubs, expect));

		free(dubs);

		return 0;
}



int main()
{

	findDuplicatesInt_01();
  	findDuplicatesInt_02();	

	return EXIT_SUCCESS;
}

