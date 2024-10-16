#include "libft.h"

static size_t	str_len(int n)
{
	size_t	count;

	if (n < 0)
		count = 2;
	else
		count = 1;
	n /= 10;
	while (n)
	{
		++count;
		n /= 10;
	}
	return (count);
}

static size_t	ft_module(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;

	len = str_len(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr)
	{
		if (n == 0)
			*ptr = '0';
		if (n < 0)
			*ptr = '-';
		ptr[len + 1] = '\0';
		while (n)
		{
			ptr[--len] = ft_module(n % 10) + '0';
			n /= 10;
		}
	}
	return (ptr);
}
