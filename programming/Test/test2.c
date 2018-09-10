#include <stdio.h>

void mycp(const void *restrict source,  void *restrict target, int bytes)
{
		int i=0;
	  	printf("size = %d\n", bytes);	
		const char *src = (char*)source;
		char *tar = (char*)target;

		for(; i < bytes; i++)
		{
			*(tar+i) = *(src+i); 
			printf("copy %p to %p\n", (src+i), (tar+i));
		}
		return;
}

int main()
{
		int arr1[5] = { 22, 23, 24, 25, 26 };
		int arr2[5] = {0};

		char str1[] = {"Hallo Welt"};
		char str2[11];

		printf("arr1 = [ %d, %d, %d, %d, %d ]\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
		printf("arr2 = [ %d, %d, %d, %d, %d ]\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);
		printf("str1 = %s\n", str1);
		printf("str2 = %s\n", str2);

		mycp(arr1, arr2, sizeof(arr1));
		mycp(str1, str2, sizeof(str1));	

		printf("arr1 = [ %d, %d, %d, %d, %d ]\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
		printf("arr2 = [ %d, %d, %d, %d, %d ]\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);
		printf("str1 = %s\n", str1);
		printf("str2 = %s\n", str2);
		return 0;
}


