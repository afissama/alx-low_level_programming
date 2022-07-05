#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - dog object struct
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
