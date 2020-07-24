#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *piData = NULL;
	piData = malloc(sizeof(int) * 10); //creating integer of size 10.
	free(piData); //free the allocated memory
	//*piData = 10; //piData is dangling pointer
	return 0;
}
