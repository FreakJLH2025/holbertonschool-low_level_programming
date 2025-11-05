#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

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
int i, len_n = 0, len_o = 0;

while (name && name[len_n])
len_n++;
while (owner && owner[len_o])
len_o++;

new = malloc(sizeof(dog_t));
if (!new)
return (NULL);

new->name = malloc(len_n + 1);
new->owner = malloc(len_o + 1);
if (!new->name || !new->owner)
{
free(new->name);
free(new->owner);
free(new);
return (NULL);
}

for (i = 0; i <= len_n; i++)
new->name[i] = name[i];
for (i = 0; i <= len_o; i++)
new->owner[i] = owner[i];
new->age = age;
return (new);
}
