#include <stdio.h>

int main()
{
	int i=0;
	{
		{
			i=20;
			{
				{
					{
						i=10;
					}
				}
				printf("%d\n",i);
			}
		}
	}
	return 1;
}