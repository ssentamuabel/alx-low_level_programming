#ifndef DOG_H
#define DOG_H
/**
 *  struct dog - a simple structur
 *  @name: first member
 *  @age: second member
 *  @owner: the pointer member
 *
 *  Description: the is a test
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/**
 *  init_dog - initializes the struct
 *  @d: pointer to the struct
 *  @name: the pointer of name
 *  @age: the age
 *  @owner: the address to the owner
 *
 *  Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
