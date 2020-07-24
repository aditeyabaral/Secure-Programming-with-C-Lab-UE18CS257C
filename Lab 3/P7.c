#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Foo(int);
double time_elapsed(struct timespec start, struct timespec end);
int main()
{
	struct timespec start, end;
	clock_gettime(CLOCK_REALTIME, &start);
	Foo(100);
	clock_gettime(CLOCK_REALTIME, &end);
	printf("%lf sec spent.\n",time_elapsed(start, end));
}
#if 0
void Foo(int n)
{
	int *piBuffer = NULL;
	//creating an integer array of size n.
	piBuffer = malloc(n * sizeof(int));
	//make sure piBuffer is valid or not
	if (piBuffer == NULL)
	{
		// allocation failed, exit from the program
		fprintf(stderr, "Out of memory!\n");
		exit(1);
	}
	free(piBuffer);
}
#endif

#if 1
void Foo(int n)
{
	int piBuffer[n]; //normal array
}
#endif

double time_elapsed(struct timespec start, struct timespec end)
{
    double t;
    t = (end.tv_sec - start.tv_sec);                  //diff of tv_sec
    t += (end.tv_nsec - start.tv_nsec) * 0.000000001; //add diff of tv_nsec too
    return t;
}
