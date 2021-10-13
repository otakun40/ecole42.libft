#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main() {
	char	*a = "Hello ";
	char	*b = "world!";
	char	*c = ft_strjoin(a, b);

	printf("%s\n%s\n%s\n", a, b, c);
	return 0;
}
