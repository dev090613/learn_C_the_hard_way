#include <stdio.h>

int main(int argc, char *argv[]) {
	// char name[4] = { 'a', 'b', 'c', '\0' };
	char *name = "Zed";
	printf("sizeof name: %lu\n", sizeof(name));

	int *int_ptr = (int *)name;

	printf("As name each: %c %c %c %c\n", 
			name[0], name[1], name[2], name[3]);
	printf("As one integer: %d\n", *int_ptr);
	printf("In Hexadecimal: 0x%x\n", *int_ptr);

	return 0;
}
