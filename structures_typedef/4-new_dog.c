#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
* new_dog - Creates a new dog with copies of name and owner
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner
*
* Return: Pointer to new dog_t, or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;

if (name == NULL || owner == NULL)
return (NULL);

new = malloc(sizeof(dog_t));
if (new == NULL)
return (NULL);

new->name = _strdup(name);
new->owner = _strdup(owner);
if (new->name == NULL || new->owner == NULL)
{
free(new->name);
free(new->owner);
free(new);
return (NULL);
}

new->age = age;
return (new);
}
