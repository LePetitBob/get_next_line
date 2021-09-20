#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	char	*linea;
	int		fd;
//	char	c;

	fd = open("texte.txt", O_RDONLY);
	while(1)
	{
		linea = get_next_line(fd);
		// getchar();
		printf("Line : %s", linea);
		if(linea == NULL)
		{
			free(linea);
			break ;
		}
		free(linea);
	}
	close(fd);
//	system("leaks a.out");
	return (0);
}
