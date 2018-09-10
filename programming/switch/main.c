#include <stdio.h>
#include <string.h>



int main()
{
		printf("Enter a char\n");
		int x = 1;


		switch(x)
		{
				case 1:
						printf("x = 1\n");
						//break; //without break this becomes a fall though statement
				case 2:
						printf("x = 2\n");
						break;
				case 3:
						printf("x = 3\n");
						break;
				default :
						printf("x is neither 1, 2 or 3");
		}

		return 0;
}


						
					
		
