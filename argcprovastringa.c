#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	j;

	x = 1;
	while (x < argc)
	{
		j = 0;
		while (argv[x][j] != '\0')
		{
			if (j % 2 == 0)
			write(1, &argv[x][j], 1);
			j++;
		}
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
		
