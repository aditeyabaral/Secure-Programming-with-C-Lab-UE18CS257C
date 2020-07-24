#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *piData = NULL;
	int n = 10; //size of the array
	int pos = 0;
	//allocate memory
	piData = malloc(sizeof(int) * n);
	for(pos = 0; pos < n; pos++)
	{
		piData[pos] = 10;
	}
	printf("Enter the array index = ");
	// Enter the index which you want to read
	scanf("%d",&pos);
	
	#if 1
	if( pos < n) //put the boundary check condition
	{
		printf("%d\n",piData[pos]);
	}
	#endif
	
	//deallocate memory
	free(piData);
	return 0;
}
