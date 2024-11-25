#include "libft.h"

// convert an integer to a string
static size_t	ft_intlen(int n)
{
	size_t	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length++;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	size_t	length;
	char	*string;
	long	number;

	length = ft_intlen(n);
	string = (char *)malloc(length + 1);
	if (!string)
		return (NULL);
	string[length] = '\0';
	number = n;
	if (number < 0)
	{
		string[0] = '-';
		number = -number;
	}
	if (number == 0)
		string[0] = '0';
	while (number)
	{
		string[--length] = (number % 10) + '0';
		number /= 10;
	}
	return (string);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(INT_MAX));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(INT_MIN));
// 	return (0);
// }
