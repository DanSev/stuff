#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *datei;
	datei = fopen("file.txt", "r");

	if(NULL == datei)
	{
			printf("Error opening the file\n");
			return EXIT_FAILURE;
	}

	char *string;
	string = malloc(100 * sizeof(*string));

	fgets(string, 99, datei);

	printf("%s\n", string);

	fclose(datei);
	return EXIT_SUCCESS;

}
