#include <stdio.h>
#include <ctype.h>
#include <string.h>

void print_letters(char arg[], int str_len);

void print_arguments(int argc, char *argv[])
{
	int i = 0, str_len = 0;
	for (i = 0; i < argc; i++) {
		str_len = strlen(argv[i]);
		print_letters(argv[i], str_len);
	}
}

void print_letters(char arg[], int str_len)
{
	int i = 0;
	for (i = 0; i < str_len; i++) {
		char ch = arg[i];
		if (isalpha(ch) || isblank(ch)) {
			printf("'%c' == %d ", ch, ch);
		}
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}
