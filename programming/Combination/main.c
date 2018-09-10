#include <stdio.h>
#include <stdlib.h>

#define PARAMS 4

int faculty(int fac)
{
		int res = 1;

		for(; fac > 1; fac--)
		{
			res *= fac;
		}
		return res;
}

static void printParams(int *param, int paramCount)
{
		for(int i = 0; i < paramCount; i++)
		{
				printf("%d%c", param[i], i == paramCount-1? '\n': '\t');
		}
}

static void rotateArray(int* param, int length, int offset)
{
		if(offset < length)
		{			
			int rotations = length - offset - 1;
			int temp = param[offset];

			for(int i = 0; i < rotations; i++)
			{
				param[i+offset] = param[i+offset+1];
			}
			param[length-1] = temp;
		}
}
				



static void printAllCobinations(int *param, int length, int paramCount, int offset)
{

	if(paramCount <= 1)
	{
			printParams(param, length);
	}
	else
	{
		for(int i = 0; i < paramCount; i++)
		{
			printAllCobinations(param, length, paramCount-1, offset+1);
			rotateArray(param, length, offset);
		}			
	}
}

void showAllCombinations(int *param, int paramCount)
{
		printAllCobinations(param, paramCount, paramCount, 0);
}


int main()
{
	
		int combi[PARAMS] = {1, 2, 3, 4};
		
		printf("There are %d possible combinations\n\n", faculty(PARAMS));

  		showAllCombinations(combi, PARAMS);

		return EXIT_SUCCESS;
}


