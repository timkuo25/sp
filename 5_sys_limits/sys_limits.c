#include <stdio.h>
#include <limits.h>

int main()
{
	printf("LONG_MIN: %ld\n", LONG_MIN); //-2^63 - 1
	printf("LONG_MAX: %ld\n", LONG_MAX); //2^63 - 1

	printf("CHAR_MIN: %d\n", CHAR_MIN); // -128
	printf("CHAR_MAX: %d\n", CHAR_MAX); //127

	printf("CHAR_BIT: %d\n", CHAR_BIT); // 8

}
