size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (size != 0)
	{
		while ((i < (size - 1)) && (i < src_len))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (src_len);
}
