#include<stdio.h>
#include<stdlib.h>
int main()
{
	int Data = 0;
	int *piData = &Data;
	//free(piData); //free the memory
	piData = NULL;
	return 0;
}
