#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DATA 512
// define Person structure
struct Person {
	char name[MAX_DATA];
	int age;
	int height;
	int weight;
};

void Person_initialize(struct Person *who, char *name, int age, int height, int weight)
{
    // to prevent buffer overflow
    strncpy(who->name, name, MAX_DATA-1);
    who->name[MAX_DATA-1] = '\0'; // null terminator
    who->age = age;
    who->height = height;
    who->weight = weight;
}


void Person_print(struct Person who)
{
	printf("\nName: %s\n", who.name);
	printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
	printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[])
{
	struct Person joe;
	struct Person frank;

    Person_initialize(&joe, "Joe Alex", 32, 64, 140);
    Person_initialize(&frank, "Frank Blank", 20, 72, 180);

    printf("joe is at memory location: %p\n", 
            (void *)&joe);
    Person_print(joe);

    printf("Frank is at memory location: %p\n", 
            (void *)&frank);
    Person_print(frank);

	joe.age += 20;
	joe.height -= 2;
	joe.weight += 40;
	Person_print(joe);

	frank.age += 20;
	frank.weight += 20;
	Person_print(frank);

	return 0;

}
