int	ft_atoi(const char *nptr)
{
	int	minus;
	int	result;

	minus = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n'
		|| *nptr == '\f' || *nptr == '\r' || *nptr == '\v')
		nptr++;
	if (*nptr == '-')
	{
		minus *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * minus);
}
