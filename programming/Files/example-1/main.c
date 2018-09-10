#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
		int c = 0;
		int filePath[255] = {0};
		FILE *dat = NULL;

		if(argc < 2)
		{
			printf("please enter the file name\n");
		//	fgets(filePath, 249, stdin);
			scanf("%s", filePath);
			dat = fopen(filePath, "r");
		}

		else
		{
			dat = fopen(argv[1], "r");
		}

		if(NULL == dat)
		{
				printf("file could not be opened\n");
				return EXIT_FAILURE;
		}

		while((c = fgetc(dat)) != EOF)
		{
				fputc(c, stdout);
		}

		return EXIT_SUCCESS;
		
}

