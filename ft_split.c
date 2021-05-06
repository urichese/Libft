char	**ft_split(char const *s, char c)
{
	int		i;
	char	**m;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			get_word(s, i);

	}
}
