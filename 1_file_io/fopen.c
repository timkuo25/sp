#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	FILE *fptr;

	//r+: r+w. Keep file content. Error when file not exists.
	//w+: r+w. Discard file content. Create file when not exist.
	fptr = fopen("file1.txt", "w");

	if(fptr == NULL)
	{
		printf("ERROR!");
		exit(1);
	}

	printf("Enter num: ");
	scanf("%d", &num);

	fprintf(fptr, "%d", num);
	fclose(fptr);
}
