#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main()
{
	int a = 7;
	int b = 22;
	int i = 0;
	int **d;
	int *w;

	d = &w;
	printf("%i - Size of range\n", ft_ultimate_range(d, a, b));
	i = 0;
	while (a < b)
	{
		printf("%i\n", w[i]);
		a++;
		i++;
	}
	return (0);
}
