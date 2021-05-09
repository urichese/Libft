#include <stdlib.h>
#include "libft.h"

int 	in_set(char const *s, char c)
{
	while (*s)
		if (*s++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int 	l;
	int 	s;
	int 	e;

	i = 0;
	s = 0;
	while (in_set(set, s1[i++]))
		s++;
	l = ft_strlen(s1);
	e = 0;
	while (in_set(set, s1[--l]))
		e++;
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) - s - e));
	if (!s2)
		return (NULL);
	while (s1[s])
		*s2 = s1[s++];
	return (s2);
}
