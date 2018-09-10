
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
   char string[] = {"Hallo Welt"};
	
   char *sub;

   sub = strchr(string, (int) 'W');
   printf("String is \"%s\"\n", string);
   printf("Substring is \"%s\"\n", sub);
	return 0;
			
}
