#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(void)
{
	int *piBuffer = NULL;
	int n = LONG_MAX, i = 0;
	//creating integer of size n.
	piBuffer = malloc(n * sizeof(int));
	//Assigned value to allocated memory
	if (piBuffer == NULL)
	{
		// allocation failed, exit from the program
		fprintf(stderr, "Out of memory!\n");
		exit(1);
	}
	for (i = 0; i < n; ++i)
	{
		piBuffer [i] = i * 3;
	}
	//Print the value
	for (i = 0; i < n; ++i)
	{
		printf("%d\n", piBuffer[i]);
	}
	//free up allocated memory
	free(piBuffer);
	return 0;
}
