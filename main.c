#include "get_next_line.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int		fd;
	// int		i;
	// int		n;
	char	*line;

	// if (ac > 2)
	// {
	// 	i = 0;
	// 	n = atoi(av[2]);
	// 	fd = open(av[1], O_RDONLY);
	// 	line = get_next_line(fd);
	// 	while (line != NULL && i < n)
	// 	{
	// 		printf("[%s]\n", line);
	// 		free(line);
	// 		line = get_next_line(fd);
	// 		++i;
	// 	}
	// 	free(line);
	// }
	if (ac > 1)
	{
		fd = open(av[1], O_RDONLY);
		line = get_next_line(fd);
		printf("the fd is %d\n", fd);
		while (line != NULL)
		{
			printf("[%s]\n", line);
			free(line);
			line = get_next_line(fd);
		}
		free(line);
	}
	return (0);
}
