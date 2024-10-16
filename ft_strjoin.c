#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 && s2)
	{
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
		ptr = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
		if (ptr)
		{
			ft_strlcpy(ptr, s1, s1_len);
			ft_strlcpy(ptr + s1_len, s2, s2_len);
		}
		return (ptr);
	}
	return (NULL);
}
