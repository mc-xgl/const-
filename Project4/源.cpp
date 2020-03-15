#include <stdio.h>

int main()

{
	unsigned int n, m, i, a[50] = { 0,1 }, b[50];

	scanf_s("%d", &n);

	for (i = 0; i < n; i++)

	{
		scanf_s("%d", &b[i]);

		if (i == 0)m = b[i];

		else if (m < b[i])m = b[i];

	}

	printf("\n");

	for (i = 2; i <= m; i++)

		a[i] = a[i - 1] + a[i - 2];

	for (i = 0; i < n; i++)

		printf("%d\n", a[b[i]]);

	return 0;

}