#include <stdio.h>
#include <fcntl.h>
#include <semaphore.h>

int main(int argc, char **argv) {
	int num_lines = 2;
	if(argc > 1)
		num_lines = atoi(argv[1]);
	printf("Starting PABX with %d phone lines.\n", num_lines);

	//
	// OS -- CRAETE NAMED SEMAPHORE HERE
	sem_t *sem = sem_open("pabx",O_CREAT,0600 ,num_lines);
	//

	int semval;
	while(1) {

		//
		// OS -- PLACE CURRENT VALUE OF SEMAPHORE IN 'semval' HERE
		int status = sem_getvalue(sem, &semval);
		//

		printf("There are %d phone lines available.\n", semval);
		sleep(3);
	}
}
