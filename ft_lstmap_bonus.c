#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*core;
	t_list	*last;

	core = NULL;
	if (lst && lst->content && f && del)
	{
		core = ft_lstnew(f(lst->content));
		if (!core)
			return (NULL);
		lst = lst->next;
		while (lst)
		{
			last = ft_lstlast(core);
			last->next = ft_lstnew(f(lst->content));
			if (!last->next)
			{
				ft_lstclear(&core, del);
				return (NULL);
			}
			lst = lst->next;
		}
	}
	return (core);
}
