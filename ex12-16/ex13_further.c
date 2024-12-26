#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;
	while (i < argc) {
		printf("arg %d: %s", i, argv[i]);
		i++;
	}
	printf("\n");

	char *states[] = {
		"California", "Oregon",
		"washington", "Texas",
	};

	int num_states = 4;
	int j = 0;
	while (j < num_states) {
		printf("state %d: %s\n", j, states[j]);
		j++;
	}
	return 0;
}
