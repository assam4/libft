#include "libft.h"

int	isalnum(int letter)
{
	return (ft_isalpha(letter) || ft_isdigit(letter));
}
