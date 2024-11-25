#include "libft.h"

// adds a node to the beginning of a list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	char	*string1 = "Hello";
// 	char	*string2 = "Bangkok!";

// 	t_list	*node1 = ft_lstnew(string1);
// 	t_list	*node2 = ft_lstnew(string2);

// 	ft_lstadd_front(&node1, node2);

// 	printf("%s\n", (char *)node1->content);
// 	printf("%s\n", (char *)node1->next->content);
// 	return (0);
// }
