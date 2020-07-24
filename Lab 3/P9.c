#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int *piBuffer = NULL;
	//creating an integer array of size n.
	piBuffer = malloc(10 * sizeof(int));
	//make sure piBuffer is valid or not
	if (piBuffer == NULL)
	{
		// allocation failed, exit from the program
		fprintf(stderr, "Out of memory!\n");
		exit(1);
	}
	printf("%d\n",sizeof(piBuffer));
	free(piBuffer);
	return 0;
}
