#include <stdio.h>


int main()
{
	char s1[] = "rishub";
	char s2[7];
	char *p = s1;
	for(int i=0;i<7;i++)
	{
		s2[i] = *(p+i);

	}
	printf("%s\n",s2);


}
