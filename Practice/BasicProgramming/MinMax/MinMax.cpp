#include <stdio.h>
int main()
{
	int a[1001] = { 0 };
	int n, e;
	scanf("%d", &n);
	int i, min, max;
	min = 101;
	max = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &e);
		if (e < min)
		{
			min = e;
		}
		if (e > max)
		{
			max = e;
		}
		a[e]++;
	}
	for (i = min; i <= max; i++)
	{
		if (a[i] == 0)
		{
			break;
		}
	}
	if (i <= max)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;
}