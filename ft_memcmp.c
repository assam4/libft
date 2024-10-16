#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int	result;

	while (n && --n)
	{
		if (*(char *)str1 != *(char *)str2)
			break ;
		(char *)++str1;
		(char *)++str2;
	}
	result = *(char *)str1 - *(char *)str2;
	return (result);
}
