#include "libft.h"

// copies memory
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*temp_dst;
	const unsigned char	*temp_src;

	if (!dst || !src || n == 0)
		return (dst);
	temp_dst = (unsigned char *)dst;
	temp_src = (const unsigned char *)src;
	while (n--)
		*temp_dst++ = *temp_src++;
	return (dst);
}

// int main(void)
// {
// 	char src[] = "Hello, Bangkok!";
// 	char dst[50];
// 	char ft_dst[50];

// 	memcpy(dst, src, strlen(src) + 1);
// 	ft_memcpy(ft_dst, src, ft_strlen(src) + 1);

// 	printf("%s (std)\n", dst);
// 	printf("%s (ft)\n", ft_dst);
// 	return (0);
// }
