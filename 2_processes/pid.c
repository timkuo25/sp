#include <stdio.h>
#include <unistd.h>  //unix standard

int main()
{
	int proc_id, par_proc_id;
	proc_id = getpid(); //unistd.h
	par_proc_id = getppid(); //unistd,h

	printf("PROCESS ID: %d\n", proc_id);
	printf("PARENT PROCESS ID: %d\n", par_proc_id);

}
