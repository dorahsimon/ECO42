#include <stdlib.h>
#include <unistd.h>

char	**ft_write_conditions(char **tab, char *str, int size)
{
	int x;
	int y;
	int z;

	x = 1;
	y = 1;
	z = 0;
	while (y < size - 1)
	{
		tab[0][y] = str[z * 2];
		tab[5][y] = str[(z + 4) * 2];
		z++;
		y++;
	}
	z = z * 2;
	while (x < size - 1)
	{
		tab[x][0] = str[z * 2];
		tab[x][5] = str[(z + 4) * 2];
		z += 1;
		x++;
	}
	return (tab);
}

char	**ft_init_table(int size, char *str)
{
	int row;
	int col;
	char **tab;

	size += 2;
	row = 0;
	tab = malloc((size + 1) * sizeof(char *));
	while (row < size)
	{
		tab[row] = malloc(size * (sizeof(char) + 1));
		col = 0;
		while (col < size)
		{
			tab[row][col] = '0';
			col++;
		}
		row++;
	}
	tab[size] = 0;
	ft_write_conditions(tab, str, size);
	return (tab);
}
