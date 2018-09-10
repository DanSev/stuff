#include <stdio.h>


int main()
{
int number = 5;		
int *ptr = &number;
int **ptr_ptr = &ptr;

printf("%p, %p, %p\n", ptr, *ptr, &number);

char *string_tab[] = { "Hallo Welt", "wie gehts"};
printf("Array aus zwei pointern size = %d\n", sizeof(string_tab));
printf("String 1 = %s\n", *string_tab);
printf("String 2 = %s\n", *(string_tab+1));
printf("String 1 = %s\n", string_tab[0]);
printf("String 2 = %s\n", string_tab[1]);
char **tab_ptr = string_tab;

printf("Pointern auf Pointer  size = %d\n", sizeof(tab_ptr));

printf("String 1 = %s\n", *tab_ptr);
printf("String 2 = %s\n", *(tab_ptr+1));

int arr[] = {10, 8 ,9 ,7 ,3, 4};
printf("Element 0 = %d\n", *arr);
printf("Element 1 = %d\n", *(arr+1));
int arr2[2] = { 1,2};
int *point = arr2;

int arr3[2];
return 0;
}
