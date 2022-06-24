#include <stdio.h>
#define n 7


int main()
{

	int i;
	int arr[]={1,2,3,4,5,6,7};
	for(i=0;i<n/2;i++)
	{
		int firstVal=arr[i];
		int secondVal=arr[n-1-i];
		arr[i]= secondVal;
		arr[n-1-i]=firstVal;
	}
	for(i=0;i<n;i++)
		printf("%d\t", arr[i]);

	printf("\n");

return 0;
}
