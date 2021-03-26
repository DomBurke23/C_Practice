#include <stdio.h>
#include <string.h>

#define DEST_SIZE 40


/* this will print out: UnimaLookHere */
int example1()
{
	char src[] = "Look Here";
	char dest[DEST_SIZE] = "Unimaginable";

	char *p = dest + 5;

	strcpy(p, src);
	printf(" example1: %s \n", dest);

	return 0;
}

/* this will print out Look Here */
void example2()
{
	char src[] = "Look Here";
	char dest[DEST_SIZE] = "Unimaginable";

	strcpy(dest, src);
	printf(" example2: %s \n", dest);
}

/* Fatal: dest doesn't have enough space to hold all characters of src plus a NULL character */
void example3()
{
	char src[] = "Look Here";
	char dest[4] = "A";
	strcpy(dest, src);
}

/* this will print out Unimaginable Here */
int example4()
{
	char src[] = "Look Here";
	char dest[DEST_SIZE] = "Unimaginable";

	char *ps = src + 4;
	char *pd = dest + strlen(dest);

	strcpy(pd, ps);
	printf(" examplec: %s \n", dest);

	return 0;
}

int main()
{
	example1();
	example2();
	example3(); 
	example4();
}