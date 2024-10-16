#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_iter;

	dest_iter = (unsigned char *)dest;
	while (n--)
		*dest_iter++ = *(const unsigned char *)src++;
	return (dest);
}
