#include <stdio.h>

int	ft_check_row(char **table, int x, int y, int value);
int	ft_check_col(char **table, int x, int y, int value);
int	ft_check_dup(char **table, int x, int y, int value);

int	ft_checker(char **table, int x, int y, int value)
{
	printf("%s\n", "OK");
	if (
		ft_check_row(table, x, y, value) &&
		ft_check_col(table, x, y, value) &&
		ft_check_dup(table, x, y, value)
		)
		return (1);
	return (0);
}

int	ft_check_row(char **table, int x, int y, int value)
{
	int i;
	int j;
	int left;
	int right;

	left = table[x][0];
	right = table[x][5];
	i = 1;
	while (i < 5)
	{
		if (table[x][1] < table[x][i])
			left--;
		i++;
	}
	j = 4;
	while (j > 0)
	{
		if (table[x][4] < table[x][j])
			right--;
		j--;
	}
	if (left >= 49 && right >= 49)
		return (1);
	return (0);
}

int	ft_check_col(char **table, int x, int y, int value)
{
	int i;
	int j;
	int top;
	int bottom;

	top = table[0][y];
	bottom = table[5][y];
	i = 1;
	while (i < 5)
	{
		if (table[1][y] < table[i][y])
			top--;
		i++;
	}
	j = 4;
	while (j > 0)
	{
		if (table[4][y] < table[j][y])
			bottom--;
		j--;
	}
	if (bottom >= 49 &&  top >= 49)
		return (1);
	return (0);
}

int	ft_check_dup(char **table, int x, int y, int value)
{
	int i;
	int j;

	i = 1;
	while (i < y)
	{
		if (table[x][i] == table[x][y])
			return (0);
		i++;
	}
	j = 1;
	while (j < x)
    {
		if (table[j][y] == table[x][y])
			return (0);
		j++;
	}
	return (1);
}
