#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (n)
	{
		while (i < n - 1 && *src)
			dest[i++] = *src++;
	}
	while (i <= n)
		dest[i++] = '\0';
	return (src_len);
}
/* return value */
