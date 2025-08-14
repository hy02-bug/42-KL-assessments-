
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			str++;
		}
		else
			return (0);
	}
	return (1);
}
// int main(){
// 	char a[] = "abcABC";
// 	char b[] = "abc1abc";
// 	char c[] = "";

// 	int d = ft_str_is_alpha(a);
// 	int e = ft_str_is_alpha(b);
// 	int f = ft_str_is_alpha(c);

// 	printf("%d\n", d);
// 	printf("%d\n", e);
// 	printf("%d\n", f);
// }