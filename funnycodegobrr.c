#include <stdio.h>

int main()
{
	int i=0;
	int j=6;
	{
		i=1;
		int j=7;
			
		{
				i=2;
				j=8;
		}
	}
	printf("i: %d\n",i);
	printf("j: %d\n",j);
	return 1;
}