#include <stdio.h>

int main()
{
	int i=0;
	{
		int j=30;
		{

			i=20;
			{
				{
					int j=40;
					{
						i=10;
						j=20;
					}
				}
				printf("i: %d\n",i);
			}
		}
		printf("j: %d\n",j);
	}
	return 1;
}