#include <stdio.h>
#include<string.h>
#include<stdlib.h>
//char send[12];




int reverse_string(char *rec)
{
	int count=0,i=0;
	char temp;
	rec = (char*)malloc(6);
	count = strlen(rec);

	for(i=0;i<count/2;i++)
	{
		temp = *(rec + count + i - 1);
		*(rec + count -i -1) = *(rec+i);
		*(rec+i) = temp;
		printf("%c\n",*(rec+i));
	}
//	*(rec+i+1)='\0';
	printf("string is-->%s",rec);
}


int main()
{
	char *string;
//	string = (char*)malloc(6);
	string="ABCDEF";
	reverse_string(string);
//	for(int i = 0 ; i < strlen(string);i++)
//	printf("%s\n",reverse_string(string));


}
