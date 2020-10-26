#include <stdio.h>
int	ft_checker(char **table, int x, int y, int value);

char	**ft_solver(char **table, int x, int y, int value)
{
	int size;

	printf("%d\n", value);
	size = '4';
	if (ft_checker(table, x, y, value) == 1)
	{
		printf("%s\n", "OK");
		table[x][y] = value;
		if (x == 4 && y == 4)
			return (table);
		if (y == 4)
		{
			ft_solver(table, (x + 1), 1, 49);
		}
		ft_solver(table, x, (y + 1), 49);
	}

	if (ft_checker(table, x, y, value) == 0)
	{
		if (value < size)
		{
			value = table[x][y] + 1;
			ft_solver(table, x, y, value);
		}
		if (value == size)
		{
			if (y == 1 && x == 1)
			{
				return (table);
			}
			if(y == 1)
			{
				x -= 1;
				y = 4;
				ft_solver(table, x, y, 49);
			}
		}

	}
	return (table);
}
