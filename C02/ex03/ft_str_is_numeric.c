#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (*str == '\0')
		return (0);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		str++;
		else
			return (0);
	}
	return (1);
}
// int main(){
// 	char a[] = "123456789";
// 	char b[] = "abc1abc";
// 	char c[] = "";

// 	int d = ft_str_is_numeric(a);
// 	int e = ft_str_is_numeric(b);
// 	int f = ft_str_is_numeric(c);

// 	printf("%d\n", d);
// 	printf("%d\n", e);
// 	printf("%d\n", f);
// }

