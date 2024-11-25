#include "libft.h"

// trims characters from the start and end of a string
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = (char *)malloc((end - start + 1) * sizeof(char));
	if (trim == NULL)
		return (NULL);
	ft_memcpy(trim, s1 + start, end - start);
	trim[end - start] = '\0';
	return (trim);
}

// int main(void)
// {
// 	char *string;

// 	string = ft_strtrim("      Hello, Bangkok!      ", " ");
// 	printf("'%s'\n", string);
// 	free(string);
// 	return 0;
// }
