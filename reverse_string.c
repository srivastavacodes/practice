#include <stdio.h>
#include <string.h>
//char send[12];

char *reverse_string(char *rec)
{
	int count=0,i=0;
	char temp;
	while(rec[count] != '\0')
	{
		count++;
	}
//	printf("%d \n",count);
	for(i=0;i<count/2;i++)
	{
		temp = rec[count-i-1];
		rec[count-i-1] = rec[i];
		rec[i] = temp;
	}
//	printf("%s",rec);

//	rec[count+1] = '\0';
//	printf("%s",rec);
	return rec;
}


int main()
{
	char string[] = "khurana";
//	printf("Length uis %ld \n",strlen(string));
	//string=	reverse_string(string);
	printf("%s \n",reverse_string(string));


}
