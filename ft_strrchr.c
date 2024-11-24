#include "libft.h"

// locates character in string
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
		return ((char *)s);
	}
	return ((char *)last);
}

// int	main(void)
// {
// 	const char *string = "Hello, Bangkok!";
// 	char c = 'B';

// 	printf("strrchr: %s\n", strrchr(string, c));
// 	printf("ft_strrchr: %s\n", ft_strrchr(string, c));
// 	return (0);
// }
