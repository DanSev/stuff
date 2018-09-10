#include <stdio.h>


/* Ein Array das an eine Funktion übergeben wird, zerfällt dabei zu einem Pointer.
 * sizeof gibt daher die größe eines Pointer zurück. Die Information über die Länge
 * eines Arrays geht bei der Übergabe an eine Funktion also verloren
 */

void func_1d(int array[])
{
		printf("size of parameter in func_1d %d\n", sizeof(array));
}

/* Bei einem 2D-Array geht auch jeglich Info über die Array-Size verloren. Aber nur die Reihe
 * zerfällt zu einem Pointer. Die Größe der Spalte muss angebeben werden. Mit [][3] würde das
 * Programm nicht kompilieren.
 */

void func_2d(int array[][2])
{		
		printf("size of parameter in func_2d %d\n", sizeof(array));

}

int main()
{
		int array[] = { 1,2,3,4,5};
		printf("Size of array in main: %d\n", sizeof(array));
		func_1d(array);
		int array_2d[5][2] = { { 1, 2},
							 { 3, 4},
							 { 5, 6},
							 { 7, 8},
							 { 9 ,10}};
		printf("Size of arra_2d in main: %d\n", sizeof(array_2d));
		func_2d(array_2d);


		return 0 ;
}
