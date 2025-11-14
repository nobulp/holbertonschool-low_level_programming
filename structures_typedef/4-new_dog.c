#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int i, ln = 0, lo = 0;

if (!name || !owner)
return (NULL);

while (name[ln])
ln++;
while (owner[lo])
lo++;

d = malloc(sizeof(dog_t));
if (!d)
return (NULL);

d->name = malloc(ln + 1);
if (!(d->name))
{
free(d);
return (NULL);
}

d->owner = malloc(lo + 1);
if (!(d->owner))
{
free(d->name);
free(d);
return (NULL);
}

for (i = 0; i <= ln; i++)
d->name[i] = name[i];
for (i = 0; i <= lo; i++)
d->owner[i] = owner[i];

d->age = age;

return (d);
}
