#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*iter;
	size_t	s_len;
	char	letter;

	s_len = ft_strlen(s) + 1;
	iter = NULL;
	letter = (char)c;
	while (s_len--)
	{
		if (*s == letter)
			iter = (char *)s;
		++s;
	}
	return (iter);
}
