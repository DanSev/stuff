#include <assert.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
		printf("no. of args = %d\n", argc);
		if(argc > 2)
		{
				assert(0);
		}
		printf("done\n");
		return 0;
}


