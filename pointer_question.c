#include <stdio.h>


int main()
{
	float arr[5] = {1,2,3,4,5};
//	printf("%p\n",arr);
//	printf("%p\n",arr+3);
	char *ptr1 = (char*)arr;
//	printf("%p",ptr1);
	char *ptr2 = ptr1+3;
	printf("%ld\n",ptr2-ptr1);
//	printf("%d",printf("helggggggggggggggggggggggggggggggggglo"));
}


