#include "libft.h"

int		main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i;

		i = 0;
		while(argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
			ft_putchar('\n');
			i++;
		}
	}
	ft_putchar('\0');
	return (0);
}
