#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int* stringToIntArray(char *string, char separator, int size) 
{
		int count = 0;		
		int len = 0;
		int start = 0;
		char buff[20] = {0};
		char c = 0;

		int *tmpArray = malloc(size * sizeof(*tmpArray));
	
		for(int i = 0; i < size; i++)
		{
				while(1)
				{

					c = string[count];
					count++;

					if((c != separator) && (c != '\0'))
					{
						len++;
					}
					else
					{
						tmpArray[i] = atoi(strncpy(buff, (string+start), len));
						start = count;
						len = 0;
						break;
					}
					
				}
		}

		return tmpArray;
}

static int* stringToDoubleArray(char *string, char separator, int size) 
{
		printf("case is f\n");
		return NULL;
}

static int* stringToStringArray(char *string, char separator, int size) 
{
		printf("case is s\n");
}

int stringToArray(char *string, void **array, char separator, char format) 
{
		int size = 0;
		int count = 0;
		char c = 0;


		if(string[0] == '\0')
		{
				*array = NULL;
				return 0;
		}

		else
		{
				size = 1;
				while((c = string[count]) != '\0')
				{				
					if(separator == c)
					{
						size++;
					}
					count++;
				}
		}

		switch(format)
		{
				case 'd':
						*array = stringToIntArray(string, separator, size);
						return size;
						
				case 'f':
						*array = stringToDoubleArray(string, separator, size);
						return size;
						
				case 's':
						 *array = stringToStringArray(string, separator, size);
						 return size;
						
				default:
						printf("Unknown format specifier %c\n", format);
						return -1;	
		}
}




int main()
{
	char text[] = "12,34,11,22,33";
	int *resInt = NULL;
	int size = 0;


		size = stringToArray(text, (void**)&resInt, ',', 'd');
		

		printf("size is %d\n", size);

		for(int i = 0; i < size; i++)
		{
			printf("element %d is %d\n", i, resInt[i]);
		}

		return EXIT_SUCCESS;


}


