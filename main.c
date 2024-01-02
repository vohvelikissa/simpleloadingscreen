#include<stdio.h>
#include<stdlib.h>

int main(int args, char * argv[]) {
	if (args >= 2) {
		printf("hold on tight you kid.");
		for (int i = 1; i < args; i++) {
			printf("processing: (%d/%d) %s\n", i, args-1, argv[i]);
			system(argv[i]);
		}
	} else {
		printf("Give me something to do you fucking idiot");
	}
	return 0;
}
