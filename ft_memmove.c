#include "libft.h"

// moves memory safely for overlapping areas
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*first;
	char	*last;

	if (!dst || !src || n == 0)
		return (NULL);
	first = (char *)src;
	last = (char *)dst;
	if (last > first)
	{
		while (n-- > 0)
		{
			last[n] = first[n];
		}
	}
	else
	{
		ft_memcpy(last, first, n);
	}
	return (dst);
}

// int main(void)
// {
// 	char	string[50] = "Hello, Tony!";
// 	char	ft_string[50] = "Hello, Tony!";

// 	printf("Before: %s (std)\n", string);
// 	memmove(string + 7, string, 6);
// 	printf("After: %s (std)\n\n", string);

// 	printf("Before: %s (ft)\n", ft_string);
// 	ft_memmove(ft_string + 7, ft_string, 6);
// 	printf("After: %s (ft)\n", ft_string);
// 	return (0);
// }
