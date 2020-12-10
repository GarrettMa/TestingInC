#include <stdio.h>
#define REPLACEMENT k =

int main()
{
	int i = 0;
	int j = 10;
	int REPLACEMENT 20;
	{
		i = 1;
		int j = 11;
		{
				i = 2;
				j = 12;
		}
	}
	printf("i: %d\n",i);
	printf("j: %d\n",j);
	printf("k: %d\n",k);
	return 1;
}