#include "libft.h"

// writes an integer to a file descriptor
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}

// int main(void)
// {
// 	ft_putnbr_fd(42, 1);
// 	printf("\n");
// 	return (0);
// }
