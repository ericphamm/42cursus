#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		len;

	len = strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && strchr(set, s1[start]))
		start++;
	while (len > start && strchr(set, s1[len - 1]))
		len--;
	str = malloc(sizeof(char) * (len - start) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (len > start)
		str[i++] = s1 [start++];
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"
// int main()
// {
// 	char s1[] = "bttttatccrimabcaa,,,this,,,tootttvttt";
// char set[] = "abvtc";
// char *result = ft_strtrim(s1, set);
// printf("%s\n", result);
// }
