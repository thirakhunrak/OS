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
	//

	int semval;
	while(1) {

		//
		// OS -- PLACE CURRENT VALUE OF SEMAPHORE IN 'semval' HERE
		//

		printf("There are %d phone lines available.\n", semval);
		sleep(3);
	}
}
