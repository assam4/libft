#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (--n && (*(char *)s1 || *(char *)s2))
	{
		if (*(char *)s1 != *(char *)s2)
			break ;
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}
