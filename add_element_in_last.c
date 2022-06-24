#include <stdio.h>
#include <stdlib.h>


char *add_char(char *str,char last)
{
	int i=0;
	while(str[i] != '\0')	i++;

	str[i] = last;
	str[i+1] = '\0';
	return str;
}

int *add_int(int *array,int element,int size)
{
	int i=0;
	int *new_arr = (int*)malloc((size+1)*sizeof(int));

	for(i=0;i<size;i++)
		*(new_arr+i) = *(array+i);

	*(new_arr+i) = element;

	for(int j=0;j<(size+1);j++)
		printf("%d",*(new_arr+j));
	return new_arr;
	free(new_arr);
}

int *add_int_index(int *array,int element,int size,int index)
{
        int i=0;
	index = index-1;
        int *new_arr = (int*)malloc((size+1)*sizeof(int));

        for(i=0;i<index;i++)
                *(new_arr+i) = *(array+i);

        *(new_arr+i) = element;

	for(i=index;i<(size+1);i++)
		*(new_arr+i+1) = *(array+i);

        for(int j=0;j<(size+1);j++)
                printf("%d",*(new_arr+j));
        return new_arr;
        free(new_arr);
}


int main()
{
/*	char arrs[] = "rishub";
	printf("%s \n",add_char(arrs,'1'));
	int arr[6] = {1,2,3,4,5,6};
	int len = sizeof(arr)/sizeof(int);
	add_int(arr,7,len);
*/

	int arr[] = {1,2,3,4,5,6};
	int len = sizeof(arr)/sizeof(int);
	add_int_index(arr,12,len,5);//array,element,lenght,index



}
