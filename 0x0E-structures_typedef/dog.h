#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create a dog
 * @name: Name of a dog.
 * @owner: Owner to the dog.
 * @age: age of of the.
 * Description: this struct stablish the features of the dog.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

/*include*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
