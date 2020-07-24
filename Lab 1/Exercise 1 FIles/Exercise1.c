#include <stdio.h>
int sum = 0,val,num = 0;
double avg;
void func();
int main(int argc, char* args[])
{
	#if 0
	while(scanf("%d",&val)!=EOF)
	{
		sum+=val;
		num++;
	}
	if(num>0)
	{
		avg = sum/num;
		printf("Average is %f\n",avg);
	}
	#endif
	
	#if 0  //r <arg1>,<arg2>
	for(int i=1;i<argc;i++)
		printf("%s\n",args[i]);
	#endif 
	
	#if 0
	int temp; //b <line> if (<condition>)
	scanf("%d",&temp);
	printf("Value = %d\n",temp);
	#endif
	
	//func(); //break at call(), step, then next.
	
	//while(scanf("%d",&val)!=EOF)  //watch <variable>
	
	#if 0 //info locals
	int temp1 = 2,temp2 = 4;
	temp1+=temp2;
	temp2-=temp1;
	#endif
	
	return 0;
}

void func()
{
	printf("Hello!\n");
	printf("This\n");
	printf("is\n");
	printf("a\n");
	printf("Test Function!\n");
}
