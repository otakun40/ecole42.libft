char	*ft_strrchr(const char *s, int c)
{
	char	*pos;

	pos = 0;
	while (*s)
	{
		if (*s == c)
			pos = (char *)s;
		s++;
	}
	if (*s == 0 && pos == 0)
		return ((char *)s);
	return (pos);
}
