#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int num, sum = 0;

	num = 8;
	ptr = (int*)malloc(num * sizeof(int));

	if(ptr == NULL)
	{
		printf("Memory allocation failed\n");
		exit(0);
	}
	else printf("Memory allocation suceeded\n");

	for (int i = 0; i < num; i++)
	{
		ptr[i] = i + 1;
	}

	printf("inserted elements in the blocks are as follows\n");
	for(int i = 0; i < num; i++)
	{
		printf("%d, ", ptr[i]);
	}
}
