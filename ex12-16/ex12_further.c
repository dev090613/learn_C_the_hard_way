#include <stdio.h>

int main(int argc, char *argv[]) {
	int areas[] = { 10, 12, 13, 14, 20 };
	char name [] = "Zed";
	char full_name[] = {
		'Z', 'e', 'd',
		' ', 'A', '.', ' ',
		'S', 'h', 'a', 'w', '\0'
	};

	printf("The size of an int: %lu\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));

	printf("The number of ints in areas: %ld\n",
			sizeof(areas) / sizeof(int));

	printf("The first area is %d, the 2nd %d.\n", 
			areas[0], areas[1]);

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of a name(char[]): %ld\n", sizeof(name));
	printf("The number of chars: %ld\n",
			sizeof(name) / sizeof(char));

	printf("The size of a full_name(char[]): %ld\n", 
			sizeof(full_name));
	printf("The number of chars: %ld\n",
			sizeof(full_name) / sizeof(char));

	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	printf("Let's go further!\n");

	areas[0] = 100;
	name[0] = 'J';
	full_name[0] = 'J';
	// printf("areas: %s", areas);
	printf("name: %s\n", name);
	printf("full_name: %s", full_name);

	return 0;
}
