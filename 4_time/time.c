#include <stdio.h>
#include <time.h>

void f()
{
	printf("function starts\npress ENTER to stop function\n");

	while(1)
		if(getchar()) break; //get character from standard input
	printf("Function ends\n");
}

int main()
{
	clock_t t; //clock ticks
	t = clock(); //get system time
	f();
	t = clock() - t;

	long double time_taken_by_f = ((long double)t) / CLOCKS_PER_SEC * 1000;
	
	printf("Function took %Lf sec\n", time_taken_by_f);
}
