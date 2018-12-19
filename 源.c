#include <stdio.h>

int main()
{
	int a[100], r, k, i;
	for (i = 0; i < 100; i++)
		a[i] = i + 1;
	i = 1;
		printf("%5d", a[i]);
	i = 2;
	while (a[i] >= 3)
	{
		for (k = 2; k < a[i]; k++)
		{
			r = a[i] % k;
			if (r == 0)
				break;
		}
		
		if (k==a[i])
			printf("%5d", a[i]);
		i++;
	}
	system("pause");
	return 0;

}