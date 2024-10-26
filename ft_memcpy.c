#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_iter;
	unsigned char	*src_iter;

	dest_iter = (unsigned char *)dest;
	src_iter = (unsigned char *)src;
	if (!src)
		return (dest);
	while (n--)
		*dest_iter++ = *src_iter++;
	return (dest);
}
