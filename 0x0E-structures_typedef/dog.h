#ifndef DOG_H
#define DOG_H

/**
 *  struct dog - struct describing a  dog
 *  @name: pointer to the name
 *  @age: age of the dog
 *  @owner: pointer to the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};

/* functions  */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
