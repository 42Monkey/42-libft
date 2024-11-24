#include "libft.h"

// locates character in string
// returns pointer to last matched character or NULL if not
char	*ft_strrchr(const char *s, int c)
{
	char		target;
	const char	*last;

	target = (char)c;
	last = NULL;
	while (*s)
	{
		if ((*s == target))
		{
			last = s;
		}
		s++;
	}
	if (target == '\0')
	{
		return ((char *)s - 1);
	}
	return ((char *)last);
}

// int	main(void)
// {
// 	const char *string = "Hello, Bangkok!";
// 	char c = 'o';

// 	printf("strrchr: %s\n", strrchr(string, c));
// 	printf("ft_strrchr: %s\n", ft_strrchr(string, c));
// 	return (0);
// }
