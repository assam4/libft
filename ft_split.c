#include "libft.h"

static size_t	words_count(const char *s, char c)
{
	size_t	count;
	size_t	is_new;

	count = 0;
	is_new = 1;
	while (*s)
	{
		if (*s != c && is_new)
		{
			is_new = 0;
			++count;
		}
		else if (*s == c && !is_new)
			is_new = 1;
		++s;
	}
	return (count);
}

static size_t	length(char const *s, char *ptr)
{
	if (ptr)
		return (ft_strlen(s) - ft_strlen(ptr) + 1);
	return (ft_strlen(s) + 1);
}

static char	*ignore_sep(char *p, char sep)
{
	while (*p && *p == sep)
		++p;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**arr;
	char	*ptr;
	size_t	len;
	size_t	i;

	count = words_count(s, c);
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (arr && count && s)
	{
		i = 0;
		while (i != count && ptr)
		{
			ptr = ft_strchr(s, c);
			len = length(s, ptr);
			arr[i] = (char *)malloc((len) * sizeof(char));
			ft_strlcpy(arr[i++], s, len - 1);
			if (ptr)
				s = (char const *)ignore_sep(ptr, c);
		}
		arr[i] = NULL;
		return (arr);
	}
	return (NULL);
}
