#include <stdio.h>

int main(int argc, char *argv[]) {
	char full_name[] = {
			'Z', 'e', 'd',
		' ', 'A', '.', ' ',
		'S', 'h', 'a', 'w', '\0'
	};

	// int areas[] = { 10, 12, 13, 14, 20 };
	char name [] = "Zed";
	
	printf("full_name: %s\n", full_name);
	printf("name: %s\n", name);
	printf("The first full_name is %c, the 2nd %c.\n", 
		full_name[20], full_name[2]);
 	printf("The first name is %c, the 2nd %c.\n", 
		name[7], name[2]);



	// printf("The size of an int: %lu\n", sizeof(int));
	// printf("The size of areas (int[]): %ld\n", sizeof(areas));

	// printf("The number of ints in areas: %ld\n",
	// 		sizeof(areas) / sizeof(int));

	// printf("The first area is %d, the 2nd %d.\n", 
	//		areas[10], areas[1]);

	// printf("The size of a char: %ld\n", sizeof(char));
	// printf("The size of a name(char[]): %ld\n", sizeof(name));
	// printf("The number of chars: %ld\n",
	// 		sizeof(name) / sizeof(char));

	// printf("The size of a full_name(char[]): %ld\n", 
	// 		sizeof(full_name));
	// printf("The number of chars: %ld\n",
	// 		sizeof(full_name) / sizeof(char));

	// printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	return 0;
}
