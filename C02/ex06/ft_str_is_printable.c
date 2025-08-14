/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbin-bak <hbin-bak@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 22:14:09 by hbin-bak          #+#    #+#             */
/*   Updated: 2025/08/13 22:41:34 by hbin-bak         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			str++;
		}
		else
			return (0);
	}
	return (1);
}
// int main(){
// 	char a[] = "\nsdsd\t";
// 	char b[] = "AC\nB\tC";
// 	char c[] = "";
//     char d[] = "!@#$^";

// 	int w = ft_str_is_printable(a);
// 	int x = ft_str_is_printable(b);
// 	int y = ft_str_is_printable(c);
//     int z = ft_str_is_printable(d);

// 	printf("%d\n", w);
// 	printf("%d\n", x);
// 	printf("%d\n", y);
//     printf("%d\n", z);
// }