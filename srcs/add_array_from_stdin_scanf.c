#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	n;
	int	*numbers;
	printf("Size of array ");
	scanf("%d", &n);
	numbers = malloc(n * sizeof(*numbers));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &numbers[i]);
		printf("%d\n", numbers[i]);
	}
	return (0);
}
