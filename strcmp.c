#include <stdio.h>
#include <string.h>

int str_compare(char *rec,char *cmp)
{
	int len = strlen(rec);
	int res;

	for(int i = 0;i<len;i++)
	{
		if(res = *(rec+i) - *(cmp+i))
		{
			return res;
			break;
		}
	}
	return 0;
}


int main()
{

	printf("%d\t\n",str_compare("rishuc","rishub"));

}
