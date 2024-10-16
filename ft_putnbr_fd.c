#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*ptr;

	if (fd < 0)
		return ;
	ptr = ft_itoa(n);
	ft_putstr_fd(ptr, fd);
	return ;
}
