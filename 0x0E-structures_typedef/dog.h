#ifndef struct_dog
#define struct_dog

/**
 *struct dog-The structure to be returned
 *
 *@name: The name of the owner
 *@owner: The name of the owner
 *@age: The age of the dog
 *
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
/*A function that initializes the variable of type struct dog*/
void print_dog(struct dog *d);
/*A function that prints struct dog*/
#endif
