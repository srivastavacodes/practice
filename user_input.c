#include <stdio.h>

int main()
{
	char inp[20];
	for(int i=0;i<10;i++)
		scanf("%c%c",&inp[i],&inp[i+1]);

	printf("new\n");

	for(int i=0;i<20;i++)
	{	printf("%d ==  ", i);
		printf("%c,",inp[i]);
	}
}
