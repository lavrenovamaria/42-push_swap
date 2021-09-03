#include <stdlib.h>
#include <stdio.h>

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n'\
			|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * i);
}

// t_list **add_stack(int *s, int not_s)
// {

// }

int	main(int argc, char **argv)
{
	int n;
	int *numbers;
	n = argc - 1;
	int i = 1;
	numbers = malloc(n * sizeof(*numbers));
	while(argv[i])
	{
		numbers[0] = ft_atoi(argv[i++]);
		printf("%d\n", numbers[0]);
	}
	return (0);
}
