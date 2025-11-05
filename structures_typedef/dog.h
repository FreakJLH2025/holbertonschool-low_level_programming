#ifndef DOG_H
#define DOG_H

/**
* struct dog - Defines a dog with name, age, and owner
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
