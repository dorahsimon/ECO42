#include <unistd.h>

char	**ft_init_table(int size, char *str);
char	**ft_solver(char **table, int x, int y, int value);
int		ft_strlen(char *str);
int		ft_error(char *str);

int		ft_input_checker(char *str)
{
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char **table;
	int	i;
	int j;
	int k;
	int l;

	if (ft_strlen(argv[1]) == 0 || ft_error(argv[1]) == 0)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	i = 0;
	(void) argc;
	table = NULL;
	table = ft_init_table(4, argv[1]);
	ft_solver(table, 1, 1, '1');

	while(i < 6)
	{
		j = 0;
		while (j < 6)
		{
			ft_putchar(table[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}

	return (0);
}
