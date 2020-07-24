#include<stdio.h>
#include<stdlib.h>
void main (void)
{
	int *piBuffer = NULL;
	int n = 10;
	//creating an integer array of size n.
	piBuffer = malloc((n+1) * sizeof(int));
	//make sure piBuffer is valid or not
	if (piBuffer == NULL)
	{
		// allocation failed, exit from the program
		fprintf(stderr, "Out of memory!\n");
		exit(1);
	}
	piBuffer[0] = n;
	int *pTmpArray = piBuffer+1;
	int ArraySize = pTmpArray[-1];
	printf("%d\n",ArraySize);
	//free(piBuffer);
}
