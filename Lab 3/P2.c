#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* Foo(int*,int);
int main()
{
	int x[] = {1,2,3,4,5,6,7,8,9,10};
	int *p = Foo(x,10);
	for(int i=0;i<10;i++)
		printf("%d ",p[i]);
	printf("\n");
	return 0;
}

int * Foo(int *x, int n)
{
	int *piBuffer = NULL;
	int i = 0;
	//creating an integer array of size n.
	piBuffer = malloc(n * sizeof(int));
	//memset(piBuffer,0,n*sizeof(int));
	//make sure piBuffer is valid or not
	if (piBuffer == NULL)
	{
		// allocation failed, exit from the program
		fprintf(stderr, "Out of memory!\n");
		exit(1);
	}
	//Add the value of the arrays
	for (i = 0; i < n; ++i)
	{
		piBuffer[i] = piBuffer[i] + x[i];
	}
	//Return allocated memory
	return piBuffer;
}
