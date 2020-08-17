#include<stdio.h>
int main()
{
	int a, c = 0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			if ((i == 1 || i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) && (i != 2 && i != 3 && i != 5 && i != 7))
			{
				continue;
			}
			printf("%d ", i);

		}

	}

}