#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z'))
		{
			str++;
		}
		else
			return (0);
	}
	return (1);
}
int main(){
	char a[] = "abcdef";
	char b[] = "ACBC";
	char c[] = "";
    char d[] = "!@#$^";

	int z = ft_str_is_lowercase(a);
	int e = ft_str_is_lowercase(b);
	int f = ft_str_is_lowercase(c);
    int y = ft_str_is_lowercase(d);

	printf("%d\n", z);
	printf("%d\n", e);
	printf("%d\n", f);
    printf("%d\n", y);
}