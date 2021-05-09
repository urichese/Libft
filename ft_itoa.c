#include <stdlib.h>

static int	count(int n)
{
	int c;

	c = 1;
	while ((n = (n / 10)))
		c++;
	return (c);
}

char		*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	long	nb;

	len = count(n);
	nb = n;
	len = (n < 0) ? len + 1 : len;
	if (!(ptr = (char*)malloc(len + 1)))
		return (0);
	if (n < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	ptr[len] = '\0';
	while (--len)
	{
		ptr[len] = nb % 10 + '0';
		nb /= 10;
	}
	return (ptr);
}
