#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - struct for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: ADT for dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *str);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H */
