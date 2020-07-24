#include <stdio.h>
#include <stdlib.h>
int main ()
{
	char * pBuffer = malloc(sizeof(char) * 20);
	/* Do some work */
	for(int i=0;i<20;i++)
		pBuffer[i] = 'A';
	printf("%s\n",pBuffer);
	free(pBuffer);
	return 0; /*Not freeing the allocated memory*/
}
